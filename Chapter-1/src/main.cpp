//
// Created by iZastic on 11/18/2015.
//

#include <SFML/Graphics.hpp>

int main(int argc, char **argv) {
  sf::RenderWindow window(sf::VideoMode(640, 480), "SFML Essentials");

  sf::ConvexShape triangle;
  triangle.setPointCount(3);
  triangle.setPoint(0, sf::Vector2f(100, 0));
  triangle.setPoint(1, sf::Vector2f(100, 100));
  triangle.setPoint(2, sf::Vector2f(0, 100));
  triangle.setFillColor(sf::Color::Blue);

  // Game loop
  while (window.isOpen()) {
    sf::Event event;
    while (window.pollEvent(event)) {
      if (event.type == sf::Event::Closed)
        window.close();
    }

    // Update scene

    window.clear(sf::Color::Black);

    window.draw(triangle);

    window.display();

  }

  return 0;
}