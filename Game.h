#pragma once

#ifndef GAME
#define GAME

#include "GameTextures.h"
#include "Tile.h"
#include <SFML/Graphics.hpp>
#include <vector>

class Game
{
public:

	Game(sf::RenderWindow& window);

	void RunGame();

private:

	void GenerateGameField();

	sf::RenderWindow& m_window;
	GameTextures textures;
	std::vector<Tile> m_gameField;
};

#endif // GAME