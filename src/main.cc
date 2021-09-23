#include<iostream>
#include "Engine/Game.hh"

int main()
{
  Game* game{new Game()};
  game->Run();

  return EXIT_SUCCESS;
}