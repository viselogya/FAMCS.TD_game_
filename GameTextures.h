#pragma once

#ifndef TILES
#define TILES

#include <SFML/Graphics.hpp>

struct GameTextures {
    GameTextures();

    sf::Texture emptyTileTexture;

    sf::Texture treeTexture;

    sf::Texture stonesTexture;

    sf::Texture horizontalRoadTexture;

    sf::Texture verticalRoadTexture;

    sf::Texture turn1Texture;

    sf::Texture turn2Texture;

    sf::Texture turn3Texture;

    sf::Texture turn4Texture;
};

#endif // !TILES