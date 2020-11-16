//
// Created by nikol on 16.11.2020.
//

#include "Map.h"

Map::Map(int size){
    if (size == 1){
        createSmallMap();
    } else {
        std::cout << "Jina mapa zatim neni bro" << std::endl;
    }
}

void Map::createSmallMap(){
    // 1. metoda - faster
    std::vector<Tile*> row1(3, nullptr);
    row1.at(0) = new ForestTile(0);
    row1.at(1) = new ForestTile(2);
    row1.at(2) = new SeaTile(0);

    // 2. metoda
    std::vector<Tile*> row2;
    row2.push_back(new ForestTile(3));
    row2.push_back(new SeaTile(0));
    row2.push_back(new SeaTile(0));

    std::vector<Tile*> row3;
    row3.push_back(new SeaTile(0));
    row3.push_back(new SeaTile(1));
    row3.push_back(new SeaTile(0));

    m_tiles.push_back(row1);
    m_tiles.push_back(row2);
    m_tiles.push_back(row3);
}

void Map::print(){
    for (auto row:m_tiles){ // auto = std::vector<Tile*>
        for (auto tile:row){
            tile->print();
            std::cout << " ";
        }
        std::cout << std::endl;
    }
}