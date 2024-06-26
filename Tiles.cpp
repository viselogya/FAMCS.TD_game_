#include "Tiles.h"

Tiles::Tiles() 
{
	sf::Texture emptyTile;
	emptyTile.loadFromFile("EmptyTile.png");
	m_emptyTile.setTexture(emptyTile);

	sf::Texture theTree;
	theTree.loadFromFile("TheTree.png");
	m_tree.setTexture(theTree);

	sf::Texture stones;
	stones.loadFromFile("Stones.png");
	m_stones.setTexture(stones);

	sf::Texture straightRoadHorizontal;
	straightRoadHorizontal.loadFromFile("StraightRoadHorizontal.png");
	m_straightRoadHorizontal.setTexture(straightRoadHorizontal);

	sf::Texture straightRoadVertical;
	straightRoadVertical.loadFromFile("StraightRoadVertical.png");
	m_straightRoadVertical.setTexture(straightRoadVertical);
	
	sf::Texture turn1;
	turn1.loadFromFile("turn1.png");
	m_turn1.setTexture(turn1);
	
	sf::Texture turn2;
	turn2.loadFromFile("turn2.png");
	m_turn2.setTexture(turn2);
	
	sf::Texture turn3;
	turn3.loadFromFile("turn3.png");
	m_turn3.setTexture(turn3);

	sf::Texture turn4;
	turn4.loadFromFile("turn4.png");
	m_turn4.setTexture(turn4);
}