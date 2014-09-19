#include "state.h"

State::State(void)
{
}

State::~State(void)
{
}

EditorState::EditorState()
{
}

EditorState::~EditorState()
{
}

void EditorState::processInputs(std::vector<Keys>& keys, sf::RenderWindow *app)
{
  for (std::vector<Keys>::iterator it = keys.begin(); it != keys.end(); ++it) {
    if (*it == W) {
      app->close();
    }
  }
  return;
}

void EditorState::draw()
{
  return;
}

