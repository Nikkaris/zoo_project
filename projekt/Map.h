//
// Created by nikol on 19.11.2020.
//

#ifndef PROJEKT_MAP_H
#define PROJEKT_MAP_H

#include <vector>
#include "Location.h"
#include "LocationDirector.h"

class Map {
    std::vector<Location*> m_locations;
    int m_currentLocationIndex;
public:
    Map();
    void createMap();
    int getCurrentLocationIndex();
    std::vector<Location*> getLocations();
    tileCoordinates getTileCoordinates();
    void setTileCoordinatesToExit();
    void printLocationInfo();
    void printSideLocations();
    void switchLocation(char playerOption);
    void printLocation();
    void printTileSides();
    Enemy* getEnemy();
    ~Map();
};


#endif //PROJEKT_MAP_H
