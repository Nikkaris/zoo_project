//
// Created by nikol on 19.11.2020.
//

#include "Map.h"

Map::Map(){
    m_currentLocationIndex = 0;
    createMap();
}

void Map::createMap(){
    m_locations.push_back(new Location("Florency", {noDirection, noDirection, 1, 2})); //UP, RIGHT, DOWN, LEFT
    m_locations.push_back(new Location("Venecia", {0, noDirection, noDirection, 3}));
    m_locations.push_back(new Location("Forli", {noDirection, 0, noDirection, noDirection}));
    m_locations.push_back(new Location("Rome", {noDirection, 1, noDirection, noDirection}));
}

int Map::getCurrentLocationIndex(){
    return m_currentLocationIndex;
}

std::vector<Location*> Map::getLocations(){
    return m_locations;
}

void Map::printLocationInfo(){
    std::cout << "You are now in location: ";
    m_locations.at(m_currentLocationIndex)->printInfo();
}

void Map::printSideLocations(){
    std::array<int, 4> sides = m_locations.at(m_currentLocationIndex)->getSideLocations();
    if (sides.at(North) >= 0){
        std::cout << "(N)orth" << std::endl;
    }
    if (sides.at(East) >= 0) {
        std::cout << "(E)ast" << std::endl;
    }
    if (sides.at(South) >= 0) {
        std::cout << "(S)outh" << std::endl;
    }
    if (sides.at(West) >= 0) {
        std::cout << "(W)est" << std::endl;
    }
    char playerOption;
    std::cin >> playerOption;
    switchLocation(playerOption);
}

void Map::switchLocation(char playerOption){
    std::array<int, 4> sides = m_locations.at(m_currentLocationIndex)->getSideLocations();
    if (playerOption == 'N'){
        m_currentLocationIndex = sides.at(North);
    } else if (playerOption == 'E'){
        m_currentLocationIndex = sides.at(East);
    }
     else if (playerOption == 'S'){
        m_currentLocationIndex = sides.at(South);
    }
     else if (playerOption == 'W'){
        m_currentLocationIndex = sides.at(West);
    }
}