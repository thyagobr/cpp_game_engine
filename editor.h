#ifndef EDITOR_H
#define EDITOR_H

#include <SFML/Graphics.hpp>
#include <vector>
#include <stdio.h>
#include "keys.h"
#include "state.h"

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

    void loadMap();

  private:
    sf::RenderWindow *app;
    std::vector<Keys> keys;
    State * currentState;

};

#endif
