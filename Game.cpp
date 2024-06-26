#include "Game.h"


Game::Game(sf::RenderWindow& window)
	:
	m_window(window)
{
	// здесь будет подгрузка и создание всех спрайтов

}

void Game::RunGame() {
	// шото происходит

    sf::Texture tile, tile2;
    tile.loadFromFile("TheTree.png");
    tile2.loadFromFile("Stones.png");
    sf::Sprite sprite;
    sf::Sprite stones;
    sprite.setTexture(tile);
    sprite.setScale(5, 5);
    stones.setTexture(tile2);
    stones.setScale(2, 3);

    while (m_window.isOpen()) {
        sf::Event event;
        while (m_window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                m_window.close();
            }
        }
        m_window.clear();
        m_window.draw(sprite);

        m_window.draw(stones);
        m_window.display();
    }
	
}