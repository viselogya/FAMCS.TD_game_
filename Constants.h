#pragma once

#ifndef CONSTANTS_H
#define CONSTANTS_H

#include <SFML/Graphics.hpp>

// ���������� ��������
extern unsigned int WINDOW_WIDTH;
extern unsigned int WINDOW_HEIGHT;
extern unsigned int TILE_SIZE;
extern unsigned int GRID_WIDTH;
extern unsigned int GRID_HEIGHT;

// ������� ��� ������������� ��������
void initializeConstants(const sf::RenderWindow& window);

#endif // CONSTANTS_H
