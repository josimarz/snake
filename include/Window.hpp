#ifndef Window_hpp
#define Window_hpp

#include <SFML/Graphics.hpp>
#include <string>

class Window {
private:
  void Setup(const std::string &l_title, const sf::Vector2u &l_size);
  void Create();
  void Destroy();
  sf::RenderWindow m_window;
  std::string m_windowTitle;
  sf::Vector2u m_windowSize;
  bool m_isFullscreen;
  bool m_isDone;

public:
  Window();
  Window(const std::string &l_title, const sf::Vector2u &l_size);
  ~Window();
  void Update();
  void ToggleFullscreen();
  void BeginDraw();
  void EndDraw();
  bool IsDone();
  bool IsFullscreen();
  sf::RenderWindow *GetRenderWindow();
  sf::Vector2u GetWindowSize();
  void Draw(sf::Drawable &l_drawable);
};

#endif