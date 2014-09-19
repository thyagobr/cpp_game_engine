#include "editor.h"
#include <stdio.h>

using namespace std;

int main()
{
  Editor ed;
  printf("%s\n", "Hello");
  while (ed.isActive()) {
    ed.getEvents();
    ed.getInputs();
    ed.tick();
    ed.draw();
  }
  return 0;
}
