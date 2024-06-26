#include "Game.h"
#include "Constants.h"

Game::Game(sf::RenderWindow& window)
	:
	m_window(window)
{
    //GenerateGameField();
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
        m_window.draw(sprites.emptyTile);
        m_window.display();
    }
	
}