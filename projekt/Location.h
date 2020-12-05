//
// Created by nikol on 19.11.2020.
//

#ifndef PROJEKT_LOCATION_H
#define PROJEKT_LOCATION_H

#include <vector>
#include "ForestTile.h"
#include "TownTile.h"
#include "HutTile.h"

struct sideLocations{
    int north, east, south, west;
};

struct tileCoordinates{
    int x, y;
};

class Location {
    std::string m_name;
    sideLocations m_sideLocations;
    std::vector<std::vector<Tile*>> m_tiles;
    tileCoordinates m_currentTileCoor;
    int m_locationSize;
public:
    Location(std::string name);
    sideLocations getSideLocations();
    tileCoordinates getCurrentCoor();
    void setTiles(std::vector<std::vector<Tile*>> tiles);
    void setSideLocations(sideLocations sides);
    void setTileCoordinatesToExit();
    void setLocationSize(int size);
    void resetTileCoordinates();
    void printInfo();
    void printTiles();
    void printTileSides();
    void moveTile();
    std::string getLocationName();
    int getLocationSize();
    Enemy* getEnemy();
    Chest* getChest();
    void removeChest();
};


#endif //PROJEKT_LOCATION_H
