#pragma once
#include<SFML/Graphics.hpp>
#include "Rigidbody.hh"
#include "Drawable.hh"


class GameObject
{
protected:
  Drawable* drawable{};
  sf::RenderWindow* window{};
  Rigidbody* rigidbody{};
public:
  GameObject();
  GameObject(const char* textureUrl, sf::Vector2f position, float scale, float width, float height, int col, int row,
  b2BodyType bodyType,sf::RenderWindow*& window, b2World*& world);
  ~GameObject();

  virtual void Update(float& deltaTime);
  virtual void Draw();
};