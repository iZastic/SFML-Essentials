//
// Created by iZastic on 11/19/2015.
//

#include <SFML/Graphics.hpp>

int main(int argc, char **argv) {
  sf::RenderWindow window(sf::VideoMode(512, 512), "Drawing images");
  // Set target frames per second
  window.setFramerateLimit(60);

  sf::Texture texture;
  texture.loadFromFile("../../res/images/smiley.png");
  texture.setSmooth(true);

  sf::Sprite smiley(texture);

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
