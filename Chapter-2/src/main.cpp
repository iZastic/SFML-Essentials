//
// Created by iZastic on 11/19/2015.
//

#include <SFML/Graphics.hpp>

void initShape(sf::RectangleShape &shape, sf::Vector2f const &pos, sf::Color const &color);

int main(int argc, char **argv) {
  sf::RenderWindow window(sf::VideoMode(640, 480), "Drawing images");
  // Set target frames per second
  window.setFramerateLimit(60);

  sf::Texture texture;
  texture.loadFromFile("../../res/images/smiley.png");

  sf::RectangleShape smiley(sf::Vector2f(256, 256));
  smiley.setTexture(&texture);

  // Game loop
  while (window.isOpen()) {
    // Handle events
    sf::Event event;
    while (window.pollEvent(event)) {
      if (event.type == sf::Event::Closed)
        window.close();
    }

    // Update

    // Render
    window.clear(sf::Color::Black);
    window.draw(smiley);
    window.display();

  }

  return 0;
}

void initShape(sf::RectangleShape &shape, sf::Vector2f const &pos, sf::Color const &color) {
  shape.setFillColor(color);
  shape.setPosition(pos);
  shape.setOrigin(shape.getSize() * 0.5f);
}