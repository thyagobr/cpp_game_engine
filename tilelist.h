#ifndef TILELIST_H
#define TILELIST_H

#include <SFML/Graphics.hpp>
#include <vector>

class Tilelist
{
  public:
    Tilelist(std::vector<sf::Texture>&);
    Tilelist();
    ~Tilelist();

    std::vector<sf::Sprite> sprites;

  private:

};
#endif
