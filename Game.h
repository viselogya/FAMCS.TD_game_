#pragma once

#ifndef GAME
#define GAME

#include <SFML/Graphics.hpp>

class Game
{
public:

	Game(sf::RenderWindow& window);

	void RunGame();

private:
	sf::RenderWindow& m_window;
};

#endif // GAME