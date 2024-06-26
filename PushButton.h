#pragma once

#ifndef PUSHBUTTON
#define PUSHBUTTON

#include <SFML/Graphics.hpp>
#include <string>

class PushButton {
public:

    PushButton() = default;

    PushButton(float x, float y, float width, float height, const std::string& text, sf::Font& font);

    void draw(sf::RenderWindow& window);

    bool isClicked(sf::Vector2i mousePos);

private:
    sf::RectangleShape m_rect;
    sf::Text m_text;
};

#endif // !PUSHBUTTON