#pragma once

#ifndef TILES
#define TILES

#include <SFML/Graphics.hpp>

struct GameSprites {
    GameSprites();

    sf::Texture emptyTileTexture;
    sf::Sprite emptyTile;

    sf::Texture treeTexture;
    sf::Sprite tree;

    sf::Texture stonesTexture;
    sf::Sprite stones;

    sf::Texture horizontalRoadTexture;
    sf::Sprite horizontalRoad;

    sf::Texture verticalRoadTexture;
    sf::Sprite verticalRoad;

    sf::Texture turn1Texture;
    sf::Sprite turn1;

    sf::Texture turn2Texture;
    sf::Sprite turn2;

    sf::Texture turn3Texture;
    sf::Sprite turn3;

    sf::Texture turn4Texture;
    sf::Sprite turn4;
};

#endif // !TILES