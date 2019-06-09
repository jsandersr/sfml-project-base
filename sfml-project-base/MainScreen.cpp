//---------------------------------------------------------------
//
// MainScreen.cpp
//

#include "MainScreen.h"
#include "Application.h"
#include "Log.h"

#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Font.hpp>
#include <SFML/Graphics/Text.hpp>

namespace Client {

//===============================================================

namespace {
	const std::string s_fontPath = "../resources/fonts/consola.ttf";
} // anon namespace

MainScreen::MainScreen(Application* application, sf::RenderWindow* window)
	: m_window(window)
	, m_application(application)
	, m_font(std::make_unique<sf::Font>())
{
	m_font->loadFromFile(s_fontPath);
}

MainScreen::~MainScreen()
{

}

void MainScreen::ProcessEvents()
{
	sf::Event e;
	while (m_window->pollEvent(e))
	{
		if (e.type == sf::Event::Closed)
		{
			m_window->close();
		}
		if (e.type == sf::Event::KeyPressed)
		{
			HandleKeyPress(e.key);
		}
		if (e.type == sf::Event::MouseButtonPressed)
		{
			HandleMouseDown(e.mouseButton);
		}
	}
}

void MainScreen::Draw()
{
	m_window->clear(sf::Color::Black);
	m_window->display();
}

void MainScreen::HandleKeyPress(const sf::Event::KeyEvent& e)
{

}

void MainScreen::HandleMouseDown(const sf::Event::MouseButtonEvent& e)
{

}

//===============================================================

} // namespace Client
