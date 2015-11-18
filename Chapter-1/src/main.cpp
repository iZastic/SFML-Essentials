//
// Created by iZastic on 11/18/2015.
//

#include <SFML/Window.hpp>

int main(int argc, char **argv) {
  sf::Window window(sf::VideoMode(300, 200), "SFML Essentials");

  // Game loop
  while (window.isOpen()) {
    /*
        Game loop stages

        1. Handle input - handle events from input devices and the window
        2. Update frame - update objects in the scene
        3. Render frame - render objects from the scene onto the window
     */
  }

  return 0;
}