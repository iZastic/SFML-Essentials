//
// Created by iZastic on 11/20/2015.
//

#include "AssetManager.hpp"

AssetManager *AssetManager::_instance = nullptr;

AssetManager::AssetManager() {
  if (_instance == nullptr) _instance = this;
}

sf::Texture &AssetManager::getTexture(std::string const &filename) {
  auto &map = _instance->_textures;

  // Check if texture is already loaded
  auto found = map.find(filename);
  if (found != map.end()) {
    // Return the texture
    return found->second;
  }
  else {
    // Create the texture
    auto &texture = map[filename];
    texture.loadFromFile("../../res/images/" + filename);
    texture.setSmooth(true);
    return texture;
  }
}