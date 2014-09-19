#include "editor.h"
#include <iostream>

Editor::Editor(void)
{
  app = new sf::RenderWindow(sf::VideoMode(800, 600), "Tile Mapper");
  currentState = new EditorState();

  textures.push_back(sf::Texture());
  textures.back.loadFromFile(DATAPATH_MAP "grass.png");
  // textures.push_back(sf::Texture());
  // textures.back.loadFromFile(DATAPATH_MAP "pavement.png");

  tilelist = Tilelist(textures);

  map = Tilemap(20, 20, tilelist);
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
    // Demonstrating another way to capture events.
    // I don't yet know about implications of one or the other.
    else if (e.type == sf::Event::KeyPressed) {
      if (e.key.code == sf::Keyboard::Escape) {
        app->close();
      }
    }
    // End of Demonstration
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

bool Editor::isActive()
{
  return app->isOpen();
}
