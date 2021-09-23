#include "Engine/CommonHeaders.hh"

Game::Game()
{
  window = new sf::RenderWindow(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), GAME_NAME);
  event = new sf::Event();
}

Game::~Game()
{
}

void Game::Run()
{
  Start();
  MainLoop();
}

void Game::MainLoop()
{
  while (window->isOpen())
  {
    while (window->pollEvent(*event))
    {
      if(event->type == sf::Event::Closed)
      {
        window->close();
      }
    }

    InputHandle();
    Update();
    Render();
  }
}

  void Game::Update()
  {

  }

  void Game::Start()
  {

  }

  void Game::Render()
  {
    window->clear(sf::Color::Black);
    Draw();
    window->display();
  }

  void Game::Draw()
  {

  }

  void Game::InputHandle()
  {

  }