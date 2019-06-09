//---------------------------------------------------------------
//
// Application.cpp
//

#include "Application.h"
#include "MainScreen.h"

#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/VideoMode.hpp>

namespace Client {

//===============================================================

Application::Application()
	: m_mainWindow(std::make_unique<sf::RenderWindow>(sf::VideoMode(1920, 1080), "sfml-project-base Test"))
	, m_screen(std::make_unique<MainScreen>(this, m_mainWindow.get()))
{
	m_mainWindow->setFramerateLimit(60);
}

Application::~Application()
{

}

void Application::Run()
{
	while (m_mainWindow->isOpen())
	{
		m_screen->ProcessEvents();
		m_screen->Draw();
	}
}

//===============================================================

} // namespace Client
