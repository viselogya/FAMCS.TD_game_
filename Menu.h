#pragma once

#ifndef MENU
#define MENU

#include "PushButton.h"
#include <SFML/Graphics.hpp>
#include <memory>

class Menu
{
public:
    Menu(sf::RenderWindow& window);

	void show();

private:
	sf::RenderWindow& m_window;
	std::unique_ptr<PushButton> m_playButton;
	std::unique_ptr<PushButton> m_exitButton;
	sf::Font m_font;
};

#endif // !MENU
