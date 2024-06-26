#include "Menu.h"

#include <SFML/Graphics.hpp>



int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Window");

    Menu menu(window);
    menu.show();

    return 0;
}