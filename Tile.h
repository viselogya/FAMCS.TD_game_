#pragma once

#ifndef TILE_H
#define TILE_H

#include <SFML/Graphics.hpp>

class Tile {
public:
    Tile(float x, float y, const sf::Texture& texture);

    void draw(sf::RenderWindow& window) const;

private:
    sf::Sprite sprite;
};

#endif // TILE_H

