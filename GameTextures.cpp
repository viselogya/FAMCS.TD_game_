#include "GameTextures.h"

GameTextures::GameTextures()
{
    emptyTileTexture.loadFromFile("EmptyTile.png");
    treeTexture.loadFromFile("TheTree.png");
    stonesTexture.loadFromFile("Stones.png");
    horizontalRoadTexture.loadFromFile("HorizontalRoad.png");
    verticalRoadTexture.loadFromFile("VerticalRoad.png");
    turn1Texture.loadFromFile("Turn1.png");
    turn2Texture.loadFromFile("Turn2.png");
    turn3Texture.loadFromFile("Turn3.png");
    turn4Texture.loadFromFile("Turn4.png");


    /*emptyTile.setTexture(emptyTileTexture);
    tree.setTexture(treeTexture);
    stones.setTexture(stonesTexture);
    horizontalRoad.setTexture(horizontalRoadTexture);
    verticalRoad.setTexture(verticalRoadTexture);
    turn1.setTexture(turn1Texture);
    turn2.setTexture(turn2Texture);
    turn3.setTexture(turn3Texture);
    turn4.setTexture(turn4Texture);*/
}