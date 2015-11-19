//
// Created by iZastic on 11/18/2015.
//

#include <SFML/Graphics.hpp>

void initShape(sf::RectangleShape &shape, sf::Vector2f const &pos, sf::Color const &color);

int main(int argc, char **argv) {
  sf::RenderWindow window(sf::VideoMode(480, 180), "Bad Squares");
  // Set target frames per second
  window.setFramerateLimit(60);

  sf::Vector2f pos(50, 90);
  sf::RectangleShape player(sf::Vector2f(50, 50));
  initShape(player, pos, sf::Color::Green);

  sf::RectangleShape target(sf::Vector2f(50, 50));
  initShape(target, sf::Vector2f(400, 90), sf::Color::Blue);

  sf::RectangleShape enemy(sf::Vector2f(50, 100));
  initShape(enemy, sf::Vector2f(250, 90), sf::Color::Red);

  // Game loop
  while (window.isOpen()) {
    // Handle events
    sf::Event event;
    while (window.pollEvent(event)) {
      if (event.type == sf::Event::Closed)
        window.close();
    }

    // Always moving right
    player.move(1, 0);

    // Player input
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
      player.move(0, 1);
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
      player.move(0, -1);

    // Target reached. You win. Exit game
    if (player.getGlobalBounds().intersects(target.getGlobalBounds()))
      window.close();

    // You lose. Restart
    if (player.getGlobalBounds().intersects(enemy.getGlobalBounds()) ||
        player.getPosition().x >= window.getSize().x)
      player.setPosition(pos);

    // Render
    window.clear(sf::Color::Black);
    window.draw(player);
    window.draw(target);
    window.draw(enemy);
    window.display();

  }

  return 0;
}

void initShape(sf::RectangleShape &shape, sf::Vector2f const &pos, sf::Color const &color) {
  shape.setFillColor(color);
  shape.setPosition(pos);
  shape.setOrigin(shape.getSize() * 0.5f);
}