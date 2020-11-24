//
// Created by nikol on 19.11.2020.
//

#include "Location.h"

Location::Location(std::string name, LocationType locationType , sideLocations sideLocations){
    m_name = name;
    m_sideLocations = sideLocations;
    m_currentTileCoor.x = 0;
    m_currentTileCoor.y = 0;
    createTiles(locationType);
}

void Location::createTiles(LocationType locationType){
    std::vector<Tile*> row(locationSize);
    std::vector<std::vector<Tile*>> tiles(locationSize, row);
    for (int i = 0; i < tiles.size(); i++){
        for (int j = 0; j < tiles.at(i).size(); j++){
            if (locationType == LocationType::Forest)
                tiles.at(i).at(j) = new ForestTile();
            if (locationType == LocationType::Town)
                tiles.at(i).at(j) = new TownTile();
        }
    }
    m_tiles = tiles;
}

sideLocations Location::getSideLocations(){
    return m_sideLocations;
}

tileCoordinates Location::getCurrentCoor(){
    return m_currentTileCoor;
}

void Location::printInfo(){
    std::cout << m_name << std::endl;
}

void Location::printTiles(){
    for (auto row:m_tiles){ // auto = std::vector<Tile*>
        for (auto tile:row){
            tile->printTile();
            std::cout << " ";
        }
        std::cout << std::endl;
    }
}

void Location::printTileSides(){
    std::cout << "X: " << m_currentTileCoor.x + 1 << std::endl;
    std::cout << "Y: " << m_currentTileCoor.y + 1 << std::endl;
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
    std::cout << std::endl;
    char playerOption;
    std::cin >> playerOption;
    moveTile(playerOption);
}

void Location::moveTile(char playerOption){
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