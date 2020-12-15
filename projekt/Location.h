//
// Created by nikol on 19.11.2020.
//

#ifndef PROJEKT_LOCATION_H
#define PROJEKT_LOCATION_H

#include <vector>
#include "ForestTile.h"
#include "TownTile.h"
#include "HutTile.h"
#include "BogTile.h"
#include "CavernTile.h"
#include "TombTile.h"
#include "NecroTile.h"
#include "WaterTile.h"

struct sideLocations{
    int north, east, south, west;
};

struct tileCoordinates{
    int x, y;
};

struct possibleMove{
    bool north = false, east = false, south = false, west = false;
};

class Location {
    std::string m_name;
    sideLocations m_sideLocations;
    std::vector<std::vector<Tile*>> m_tiles;
    tileCoordinates m_currentTileCoor;
    int m_locationSize;
    bool m_visited;
public:
    Location(std::string name);
    sideLocations getSideLocations();
    tileCoordinates getCurrentCoor();
    void setTiles(std::vector<std::vector<Tile*>> tiles);
    void setSideLocations(sideLocations sides);
    void setTileCoordinatesToExit();
    void setLocationSize(int size);
    void resetTileCoordinates();
    void setVisited();
    bool getVisited();
    void printInfo();
    void printTiles();
    void printTileSides();
    void switchTile(possibleMove move);
    std::string getLocationName();
    int getLocationSize();
    Enemy* getEnemy();
    Chest* getChest();
    FriendlyCharacter* getFriendlyCharacter();
    void removeChest();
    void removeEnemy();
};


#endif //PROJEKT_LOCATION_H
