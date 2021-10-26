#include "ContactEventManager.hh"
#include "GameObject.hh"

ContactEventManager::ContactEventManager()
{
}

ContactEventManager::~ContactEventManager()
{
}

void ContactEventManager::BeginContact(b2Contact *contact)
{
  b2ContactListener::BeginContact(contact);

  //GameObject* goA{(GameObject*) contact->GetFixtureA()->GetBody()->GetUserData()};
}
void ContactEventManager::EndContact(b2Contact *contact)
{
  b2ContactListener::EndContact(contact);
}