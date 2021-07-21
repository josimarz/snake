#ifndef Game_hpp
#define Game_hpp

#include "Snake.hpp"
#include "Textbox.hpp"
#include "Window.hpp"
#include "World.hpp"
#include <SFML/Graphics.hpp>

class Game {
private:
  Window m_window;
  sf::Clock m_clock;
  float m_elapsed;
  World m_world;
  Snake m_snake;
  Textbox m_textbox;

public:
  Game();
  ~Game();
  void HandleInput();
  void Update();
  void Render();
  sf::Time GetElapsed();
  void RestartClock();
  Window *GetWindow();
};

#endif
