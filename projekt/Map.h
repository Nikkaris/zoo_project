//
// Created by nikol on 19.11.2020.
//

#ifndef PROJEKT_MAP_H
#define PROJEKT_MAP_H

#include <vector>
#include "Location.h"

enum direction {noDirection = -1, North = 0, East = 1, South = 2, West = 3};

class Map {
    std::vector<Location*> m_locations;
    int m_currentLocationIndex;
public:
    Map();
    void createMap();
    int getCurrentLocationIndex();
    std::vector<Location*> getLocations();
    void printLocationInfo();
    void printSideLocations();
    void switchLocation(char playerOption);
};


#endif //PROJEKT_MAP_H
