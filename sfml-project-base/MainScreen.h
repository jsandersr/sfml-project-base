//---------------------------------------------------------------
//
// MainScreen.h
//

#pragma once

#include "Screen.h"

#include <memory>
#include <SFML/Window/Event.hpp>

namespace sf {
class RenderWindow;
class Font;
} // namespace sf

namespace Client {

//===============================================================

class Application;

class MainScreen : public Screen {
public:
	MainScreen(Application* application, sf::RenderWindow* window);
	~MainScreen();
	// Screen impl
	virtual void ProcessEvents() override;
	virtual void Draw() override;

private:
	void HandleKeyPress(const sf::Event::KeyEvent& e);
	void HandleMouseDown(const sf::Event::MouseButtonEvent& e);

private:
	sf::RenderWindow* m_window;
	std::unique_ptr<sf::Font> m_font;
	Application* m_application;
};

//===============================================================

} // namespace Client
