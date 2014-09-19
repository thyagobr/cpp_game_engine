#ifndef MAP_H
#define MAP_H

#include <SFML/Graphics.hpp>
#include "tilelist.h"

class Tilemap : sf::Drawable
{
  public:
    Tilemap(int x, int y, Tilelist);
    Tilemap();
    ~Tilemap();
    
    void loadFromFile(const char* filePath);
  private:

    int *tiles;
    int x, y;

    Tilelist tilelist;

    virtual void draw(sf::RenderTarget&, sf::RenderStates) const;
};
#endif
