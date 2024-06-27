#include "Tile.h"

Tile::Tile(float x, float y, const sf::Texture& texture) : sprite(texture) {
    sprite.setPosition(x, y);
}

void Tile::draw(sf::RenderWindow& window) const {
    window.draw(sprite);
}
