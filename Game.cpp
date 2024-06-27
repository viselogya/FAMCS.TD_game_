#include "Game.h"

Game::Game(sf::RenderWindow& window)
	:
	m_window(window)
{
    GenerateGameField();
}

void Game::RunGame() {
	// шото происходит

    while (m_window.isOpen()) {
        sf::Event event;
        while (m_window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                m_window.close();
            }
        }
        
        m_window.clear();
        /*for (const auto& i : m_gameField) {
            i.draw(m_window);
        }*/
        m_window.display();
    }
}

void Game::GenerateGameField() {
    /*for (size_t i = 0; i < GRID_HEIGHT; ++i) {
        for (size_t j = 0; j < GRID_WIDTH; ++j) {
            m_gameField.emplace_back(i * TILE_SIZE, j * TILE_SIZE, textures.emptyTileTexture);
        }
    }*/
}