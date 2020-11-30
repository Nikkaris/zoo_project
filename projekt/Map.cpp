//
// Created by nikol on 19.11.2020.
//

#include "Map.h"

Map::Map(){
    m_currentLocationIndex = 0;
    createMap();
}

void Map::createMap(){
    //UP, RIGHT, DOWN, LEFT
    m_locations.push_back(new Location("Florency",LocationType::Forest,{noDirection, noDirection, 1, 2}));
    m_locations.push_back(new Location("Venecia", LocationType::Town,{0, noDirection, noDirection, 3}));
    m_locations.push_back(new Location("Forli", LocationType::Forest,{noDirection, 0, noDirection, noDirection}));
    m_locations.push_back(new Location("Rome", LocationType::Forest,{noDirection, 1, noDirection, noDirection}));
}

int Map::getCurrentLocationIndex(){
    return m_currentLocationIndex;
}

std::vector<Location*> Map::getLocations(){
    return m_locations;
}

tileCoordinates Map::getTileCoordinates(){
   return m_locations.at(m_currentLocationIndex)->getCurrentCoor();
}

void Map::printLocationInfo(){
    std::cout << "You are now in location: ";
    m_locations.at(m_currentLocationIndex)->printInfo();
}

void Map::printSideLocations(){
    sideLocations sides = m_locations.at(m_currentLocationIndex)->getSideLocations();
    if (sides.north >= 0){
        std::cout << "(N)orth - " << m_locations.at(sides.north)->getLocationName() << std::endl;
    }
    if (sides.east >= 0) {
        std::cout << "(E)ast - " << m_locations.at(sides.east)->getLocationName() << std::endl;
    }
    if (sides.south >= 0) {
        std::cout << "(S)outh - " << m_locations.at(sides.south)->getLocationName() << std::endl;
    }
    if (sides.west >= 0) {
        std::cout << "(W)est - " << m_locations.at(sides.west)->getLocationName() << std::endl;
    }
    char playerOption;
    std::cin >> playerOption;
    switchLocation(playerOption);
}

void Map::switchLocation(char playerOption){
    sideLocations sides = m_locations.at(m_currentLocationIndex)->getSideLocations();
    if (playerOption == 'N'){
        m_currentLocationIndex = sides.north;
    } else if (playerOption == 'E'){
        m_currentLocationIndex = sides.east;
    } else if (playerOption == 'S'){
        m_currentLocationIndex = sides.south;
    } else if (playerOption == 'W'){
        m_currentLocationIndex = sides.west;
    }
}

void Map::printLocation(){
    m_locations.at(m_currentLocationIndex)->printTiles();
}

void Map::printTileSides(){
    m_locations.at(m_currentLocationIndex)->printTileSides();
}

Enemy* Map::getEnemy(){
   return m_locations.at(m_currentLocationIndex)->getEnemy();
}

Map::~Map(){
    for (auto &location:m_locations){
        delete location;
    }
}