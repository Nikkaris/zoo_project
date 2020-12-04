//
// Created by nikol on 19.11.2020.
//

#include "Map.h"

Map::Map(){
    m_currentLocationIndex = 0;
    createMap();
}

void Map::createMap(){
    LocationDirector* director = new LocationDirector(new HutTileBuilder);
    m_locations.push_back(director->createLocation());
    director->setLocationBuilder(new ForestLocationBuilder);
    m_locations.push_back(director->createLocation());
    director->setLocationBuilder(new TownLocationBuilder);
    m_locations.push_back(director->createLocation());
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

void Map::setTileCoordinatesToExit(){
    m_locations.at(m_currentLocationIndex)->setTileCoordinatesToExit();
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
    m_locations.at(m_currentLocationIndex)->resetTileCoordinates();
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

Chest* Map::getChest(){
    return m_locations.at(m_currentLocationIndex)->getChest();
}

Map::~Map(){
    for (auto &location:m_locations){
        delete location;
    }
}