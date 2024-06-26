#include "Menu.h"
#include "Constants.h"

Menu::Menu(sf::RenderWindow& window, Game& game)
    :
    m_window(window),
    m_game(game)
{
	m_font.loadFromFile("arialmt.ttf");

	m_playButton = std::make_unique<PushButton>(WINDOW_WIDTH / 2 - 100, WINDOW_HEIGHT / 2 - 100, 200, 50, "Play", m_font);
	m_exitButton = std::make_unique<PushButton>(WINDOW_WIDTH / 2 - 100, WINDOW_HEIGHT / 2 + 100, 200, 50, "Exit", m_font);
}

void Menu::show() {
    while (m_window.isOpen()) {
        sf::Event event;
        while (m_window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                m_window.close();
            }
            if (event.type == sf::Event::MouseButtonPressed) {
                if (m_playButton->isClicked(sf::Mouse::getPosition(m_window))) {
                    m_game.RunGame();
                }
                if (m_exitButton->isClicked(sf::Mouse::getPosition(m_window))) {
                    m_window.close();
                }
            }
        }

        m_window.clear(sf::Color::Cyan);

        m_playButton->draw(m_window);
        m_exitButton->draw(m_window);

        m_window.display();
    }
}