#pragma once

#include<SFML/Graphics.hpp>

class Animation
{
private:
  float delay{};
  int row{};
  int startFrame{};
  int endFrame{};
  float width{};
  float height{};
  int currentFrame{};
  sf::Sprite* sprite;
  float timer{};
public:
  Animation(float delay, int row, int startFrame, int endFrame, float width, float height, sf::Sprite*& sprite);
  ~Animation();
  void Play(float& deltaTime);
};