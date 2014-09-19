#include "tilelist.h"

Tilelist::Tilelist()
{
}

Tilelist::~Tilelist()
{
}

Tilelist::Tilelist(std::vector<sf::Texture> &textures)
{
  std::vector<sf::Texture>::iterator it;
  for (it = textures.begin(); it != textures.end(); ++it) {
    sf::Sprite s;
    s.setTexture(*it);
    sprites.push_back(s);
  }
}
