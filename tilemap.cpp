#include "tilemap.h"

Tilemap::Tilemap(int x, int y, Tilelist tilelist)
{
  this->x = x;
  this->y = y;
  this->tilelist = tilelist;

  tiles = new int[x * y]
}

Tilemap::Tilemap()
{
}

Tilemap::~Tilemap()
{
  delete[] tiles;
}

void loadFromFile(const char* filePath)
{
}

void draw(sf::RenderTarget &target, sf::RenderStates state)
{
}
