#include "Menu.h"
#include "Game.h"

#include <SFML/Graphics.hpp>

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "FAMCS Tower Defense");

    Game game(window);
    Menu menu(window, game);
    menu.show();

    return 0;
}