#pragma once

#include<iostream>
#include<SFML/Graphics.hpp>
#include<box2d/box2d.h>
#include "DrawPhysics.hh"

class Game
{
private:
  sf::RenderWindow* window{};
  sf::Event* event{};
  b2World* world{};
  b2Vec2* gravity{};
  b2Draw* drawPhysics{};

  float deltaTime{};
  sf::Clock* gameClock{};

  void MainLoop();
  void UpdatePhysics();
  void Update();
  void Start();
  void Render();
  void Draw();
  void InputHandle();

public:
  Game();
  ~Game();

  void Run();
};