//
// Created by iZastic on 11/18/2015.
//

#include <SFML/Window.hpp>

int main(int argc, char **argv) {
  sf::Window window(sf::VideoMode(300, 200), "SFML Essentials");

  sf::String buffer;

  // Game loop
  while (window.isOpen()) {
    sf::Event event;
    while (window.pollEvent(event)) {
      switch (event.type) {
        case sf::Event::Closed:
          window.close();
          break;
        case sf::Event::TextEntered:
          // Add typed characters to the buffer
          buffer += event.text.unicode;
          break;
        case sf::Event::KeyReleased:
          // Set the window title to the text entered and clear the buffer
          if (event.key.code == sf::Keyboard::Return) {
            window.setTitle(buffer);
            buffer.clear();
          }
          break;
        default:
          break;
      }
    }

    // Update frame

    // Render frame
  }

  return 0;
}