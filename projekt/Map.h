//
// Created by nikol on 19.11.2020.
//

#ifndef PROJEKT_MAP_H
#define PROJEKT_MAP_H

#include <vector>
#include "LocationDirector.h"

class Map {
    std::vector<Location*> m_locations;
    int m_currentLocationIndex;
public:
    Map();
    void createMap();
    int getCurrentLocationIndex();
    std::vector<Location*> getLocations();
    Location* getCurrentLocation();
    tileCoordinates getTileCoordinates();
    void setTileCoordinatesToExit();
    void printLocationInfo();
    void printSideLocations();
    void switchLocation();
    void printLocation();
    void printTileSides();
    Enemy* getEnemy();
    Chest* getChest();
    void removeChest();
    ~Map();
};


#endif //PROJEKT_MAP_H
