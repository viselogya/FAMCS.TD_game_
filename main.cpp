#include "Menu.h"
#include "Game.h"
#include "Constants.h"

#include <SFML/Graphics.hpp>

int main() {
    sf::RenderWindow window(sf::VideoMode(sf::VideoMode::getDesktopMode()), "FAMCS Tower Defense", sf::Style::Fullscreen);
    initializeConstants(window);

    Game game(window);
    Menu menu(window, game);
    menu.show();
}