#ifndef EDITOR_H
#define EDITOR_H

#define DATAPATH_MAP "data/img/map/"

#include <SFML/Graphics.hpp>
#include <vector>
#include <stdio.h>
#include "keys.h"
#include "state.h"
#include "tilemap.h"
#include "tilelist.h"

class Editor
{
  public:
    Editor(void);
    ~Editor(void);

    void getEvents();
    void getInputs();
    void draw();
    void tick();
    bool isActive();

  private:
    sf::RenderWindow *app;
    std::vector<Keys> keys;
    State * currentState;
    Tilemap map;
    Tilelist tilelist;
    std::vector<sf::Texture> textures;

};

#endif
