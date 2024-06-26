#pragma once

#ifndef GAME
#define GAME

#include "GameSprites.h"
#include <SFML/Graphics.hpp>

class Game
{
public:

	Game(sf::RenderWindow& window);

	void RunGame();

private:

	//void GenerateGameField();

	sf::RenderWindow& m_window;
	GameSprites sprites;
};

#endif // GAME