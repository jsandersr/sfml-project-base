//---------------------------------------------------------------
//
// Application.h
//

#pragma once

#include <memory>

namespace sf {
	class RenderWindow;
}

namespace Client {

//===============================================================

class Screen;

class Application
{
public:
	Application();
	~Application();

	void Run();

private:
	std::unique_ptr<sf::RenderWindow> m_mainWindow;
	std::unique_ptr<Screen> m_screen;
};

//===============================================================

} // namespace Client
