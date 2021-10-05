#pragma once
#include<SFML/Graphics.hpp>
#include<string>
#include<iostream>
#include "Rigidbody.hh"

class Character
{
private:
  sf::Sprite* sprite{};
  sf::Vector2f position{};
  float scale{};
  float width{};
  float height{};
  float moveSpeed;
  sf::Texture* texture;
  sf::RenderWindow* window{};
  Rigidbody* rigidbody{};
public:
  Character();
  Character(const char* textureUrl, sf::Vector2f position, 
  float scale, float width, float height, int col, int row, float moveSpeed, 
  sf::RenderWindow*& window, b2World*& world);
  ~Character();

  void Update();
  void Draw();
  void Movement(float& deltaTime);
  void FlipSprite();
};