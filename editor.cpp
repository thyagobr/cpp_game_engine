#include "editor.h"

Editor::Editor(void)
{
  app = new sf::RenderWindow(sf::VideoMode(800, 600), "Tile Mapper");
  currentState = new EditorState();
}

Editor::~Editor(void)
{
  delete app;
  delete currentState;
}

void Editor::getEvents()
{
  sf::Event e;
  while(app->pollEvent(e)) {
    if (e.type == sf::Event::Closed) { 
      app->close();
    }
  }
  return;
}

void Editor::getInputs()
{
  keys.clear();
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
    keys.push_back(W); 
  }
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
    keys.push_back(S); 
  }
  return;
}

void Editor::tick()
{
  currentState->processInputs(keys, app);
  return;
}

void Editor::draw()
{
  app->clear();
  app->display();
}

void Editor::loadMap()
{
}

bool Editor::isActive()
{
  return app->isOpen();
}
