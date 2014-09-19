#ifndef STATE_H
#define STATE_H

#include <vector>
#include "keys.h"
#include <SFML/Graphics.hpp>

class State
{
  public:
    State();
    virtual ~State();

    virtual void processInputs(std::vector<Keys>&, sf::RenderWindow*) = 0;
    virtual void draw() = 0;
};

class EditorState : public State
{
  public:
    EditorState();
    ~EditorState();

    void processInputs(std::vector<Keys>&, sf::RenderWindow*);
    void draw();
};
#endif
