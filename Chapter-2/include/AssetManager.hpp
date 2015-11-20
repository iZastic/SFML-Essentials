//
// Created by iZastic on 11/20/2015.
//

#ifndef SFML_ESSENTIALS_ASSETMANAGER_H
#define SFML_ESSENTIALS_ASSETMANAGER_H

#include <SFML/Graphics.hpp>

class AssetManager {
 public:
  AssetManager();

  static sf::Texture &getTexture(std::string const &filename);

 private:
  std::map<std::string, sf::Texture> _textures;

  static AssetManager *_instance;
};


#endif //SFML_ESSENTIALS_ASSETMANAGER_H
