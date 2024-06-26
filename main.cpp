#include "Menu.h"
#include "Game.h"
#include "Constants.h"

#include <SFML/Graphics.hpp>

int main() {
    sf::RenderWindow window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "FAMCS Tower Defense");

    Game game(window);
    Menu menu(window, game);
    menu.show();

    return 0;
}