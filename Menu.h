#pragma once

#ifndef MENU
#define MENU

#include "PushButton.h"
#include "Game.h"
#include <SFML/Graphics.hpp>
#include <memory>

class Menu
{
public:
    Menu(sf::RenderWindow& window, Game& game);

	void show();

private:
	Game& m_game;
	sf::RenderWindow& m_window;
	std::unique_ptr<PushButton> m_playButton;
	std::unique_ptr<PushButton> m_exitButton;
	sf::Font m_font;
};

#endif // !MENU
