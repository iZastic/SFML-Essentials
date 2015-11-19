//
// Created by iZastic on 11/18/2015.
//

#include <SFML/Graphics.hpp>

int main(int argc, char **argv) {
  sf::RenderWindow window(sf::VideoMode(640, 480), "SFML Essentials");
  // Set target frames per second
  window.setFramerateLimit(60);

  sf::RectangleShape rect(sf::Vector2f(50, 50));

  // Game loop
  while (window.isOpen()) {
    sf::Event event;
    while (window.pollEvent(event)) {
      if (event.type == sf::Event::Closed)
        window.close();
    }

    // Update
    rect.rotate(1.5);
    rect.move(sf::Vector2f(1, 0));

    // Render
    window.clear(sf::Color::Black);
    window.draw(rect);
    window.display();

  }

  return 0;
}