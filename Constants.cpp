#include "Constants.h"

// ����������� ��������
unsigned int WINDOW_WIDTH;
unsigned int WINDOW_HEIGHT;
unsigned int TILE_SIZE;
unsigned int GRID_WIDTH;
unsigned int GRID_HEIGHT;

void initializeConstants(const sf::RenderWindow& window) {
    WINDOW_WIDTH = window.getSize().x;
    WINDOW_HEIGHT = window.getSize().y;

    // ������ ������������� ����������� ������� ������ � ����������� �� ������� ����
    TILE_SIZE = WINDOW_WIDTH / 20; // ������ ������� ������� ������, ����� ���� ������� �� ������ ����������

    // ������������� ������� ����� � ����������� �� ����� �������� ������
    GRID_WIDTH = WINDOW_WIDTH / TILE_SIZE;
    GRID_HEIGHT = WINDOW_HEIGHT / TILE_SIZE;
}
