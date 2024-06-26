#pragma once

#ifndef TILES
#define TILES

#include <SFML/Graphics.hpp>

struct Tiles
{
	Tiles();
	sf::Sprite m_emptyTile;
	sf::Sprite m_tree;
	sf::Sprite m_stones;
	sf::Sprite m_straightRoadHorizontal;
	sf::Sprite m_straightRoadVertical;
	sf::Sprite m_turn1;
	sf::Sprite m_turn2;	
	sf::Sprite m_turn3;
	sf::Sprite m_turn4;
};

#endif // !TILES