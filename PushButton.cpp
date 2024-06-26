#include "PushButton.h"

PushButton::PushButton(float x, float y, float width, float height, const std::string& text, sf::Font& font)
	:
	m_rect(sf::Vector2f(width, height)),
	m_text(text, font, 24)
{
	m_rect.setPosition(x, y);
	m_rect.setFillColor(sf::Color::White);

	m_text.setPosition(x + 10, y + 10);
	m_text.setFillColor(sf::Color::Black);
}

void PushButton::draw(sf::RenderWindow& window) {
	window.draw(m_rect);
	window.draw(m_text);
}
 
bool PushButton::isClicked(sf::Vector2i mousePos) {
	return m_rect.getGlobalBounds().contains(static_cast<sf::Vector2f>(mousePos));
}