//
// Created by nikol on 19.11.2020.
//

#ifndef PROJEKT_LOCATION_H
#define PROJEKT_LOCATION_H

#include <vector>
#include "ForestTile.h"
#include "TownTile.h"

const int locationSize = 3;

enum class LocationType{
    Forest, Town
};

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

    void createTiles(LocationType locationType);
    void createHostileTile();
public:
    Location(std::string name, LocationType locationType, sideLocations sideLocations);
    sideLocations getSideLocations();
    tileCoordinates getCurrentCoor();
    void printInfo();
    void printTiles();
    void printTileSides();
    void moveTile(char playerOption);
    std::string getLocationName();
    Enemy* getEnemy();
};


#endif //PROJEKT_LOCATION_H
