//
// Created by iZastic on 11/18/2015.
//

#include <SFML/Graphics.hpp>

int main(int argc, char **argv) {
  sf::RenderWindow window(sf::VideoMode(640, 480), "SFML Essentials");

  sf::CircleShape circle(50);
  circle.setFillColor(sf::Color::Red);
  circle.setOutlineColor(sf::Color::White);
  circle.setOutlineThickness(3);

  sf::RectangleShape rectangle(sf::Vector2f(50, 50));
  rectangle.setFillColor(sf::Color::Green);

  // Game loop
  while (window.isOpen()) {
    sf::Event event;
    while (window.pollEvent(event)) {
      if (event.type == sf::Event::Closed)
        window.close();
    }

    // Update scene

    window.clear(sf::Color::Black);

    window.draw(circle);
    window.draw(rectangle);

    window.display();

  }

  return 0;
}