#include "Menu.h"

Menu::Menu(sf::RenderWindow& window)
	:
	m_window(window)
{
	m_font.loadFromFile("arialmt.ttf");

	m_playButton = std::make_unique<PushButton>(300, 200, 200, 50, "Play", m_font);
	m_exitButton = std::make_unique<PushButton>(300, 300, 200, 50, "Exit", m_font);
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