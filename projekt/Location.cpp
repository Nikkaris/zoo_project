//
// Created by nikol on 19.11.2020.
//

#include "Location.h"

Location::Location(std::string name) {
    m_name = name;
    m_currentTileCoor.x = 0;
    m_currentTileCoor.y = 0;
}

sideLocations Location::getSideLocations(){
    return m_sideLocations;
}

tileCoordinates Location::getCurrentCoor(){
    return m_currentTileCoor;
}

void Location::setTiles(std::vector<std::vector<Tile*>> tiles){
    m_tiles = tiles;
}

void Location::setSideLocations(sideLocations sides){
    m_sideLocations = sides;
}

void Location::setTileCoordinatesToExit(){
    m_currentTileCoor.x = m_tiles.size()-1;
    m_currentTileCoor.y = m_tiles.size()-1;
}

void Location::setLocationSize(int size){
    m_locationSize = size;
}

void Location::resetTileCoordinates(){
    m_currentTileCoor.x = 0;
    m_currentTileCoor.y = 0;
}

void Location::printInfo(){
    std::cout << m_name << std::endl;
}

void Location::printTiles(){
    bool printHero = false;
    for (int i = 0; i < m_tiles.size(); i++){ // auto = std::vector<Tile*>
        for (int j = 0; j < m_tiles.at(0).size(); j++){
            if (m_currentTileCoor.x == i and m_currentTileCoor.y == j)
                printHero = true;
            m_tiles.at(i).at(j)->printTile(printHero);
            printHero = false;
            std::cout << " ";
        }
        std::cout << std::endl;
    }
}

void Location::printTileSides(){
    if (m_currentTileCoor.x > 0){
        std::cout << "You can go (U)p" << std::endl;
    }
    if (m_currentTileCoor.y < m_tiles.at(0).size()-1){
        std::cout << "You can go (R)ight" << std::endl;
    }
    if (m_currentTileCoor.x < m_tiles.size()-1){
        std::cout << "You can go (D)own" << std::endl;
    }
    if (m_currentTileCoor.y > 0){
        std::cout << "You can go (L)eft" << std::endl;
    }
    moveTile();
}

void Location::moveTile(){
    std::cout << std::endl;
    char playerOption;
    std::cin >> playerOption;

    if (playerOption == 'U'){
        m_currentTileCoor.x--;
    } else if (playerOption == 'R'){
        m_currentTileCoor.y++;
    } else if (playerOption == 'D'){
        m_currentTileCoor.x++;
    } else if (playerOption == 'L'){
        m_currentTileCoor.y--;
    }
}

std::string Location::getLocationName(){
    return m_name;
}

int Location::getLocationSize(){
    return m_locationSize;
}

Enemy* Location::getEnemy(){
    return m_tiles.at(m_currentTileCoor.x).at(m_currentTileCoor.y)->getEnemy();
}

Chest* Location::getChest(){
    return m_tiles.at(m_currentTileCoor.x).at(m_currentTileCoor.y)->getChest();
}

FriendlyCharacter* Location::getFriendlyCharacter(){
    return m_tiles.at(m_currentTileCoor.x).at(m_currentTileCoor.y)->getFriendlyCharacter();
}

void Location::removeChest(){
    m_tiles.at(m_currentTileCoor.x).at(m_currentTileCoor.y)->removeChest();
}