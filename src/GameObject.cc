#include "GameObject.hh"

GameObject::GameObject()
{

}

GameObject::GameObject(const char* textureUrl, sf::Vector2f position, float scale, float width, float height, int col, int row,
b2BodyType bodyType, sf::RenderWindow*& window, b2World*& world)
{
  this->position = position;
  this->scale = scale;
  this->width = width;
  this->height = height;
  this->width = width;
  this->window = window;

  texture = new sf::Texture();
  texture->loadFromFile(textureUrl);
  sprite = new sf::Sprite(*texture, sf::IntRect(col * width, row * height, width, height));
  sprite->setPosition(position);
  sprite->setScale(sf::Vector2f(scale, scale));
  sprite->setColor(sf::Color::White);

  rigidbody = new Rigidbody(world, new b2Vec2(position.x, position.y), width * scale, height * scale,
  bodyType, new b2Vec2(sprite->getOrigin().x, sprite->getOrigin().y),
  0.f, 1.f, 0.f, 0.f);

  sprite->setOrigin(width / 2, height / 2);
}

GameObject::~GameObject()
{
}

void GameObject::Update(float& deltaTime)
{
  sprite->setPosition(rigidbody->GetPosition2SFML());
}
void GameObject::Draw()
{
  window->draw(*sprite);
}
