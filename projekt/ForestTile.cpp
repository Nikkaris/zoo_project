//
// Created by nikol on 24.11.2020.
//

#include "ForestTile.h"

ForestTile::ForestTile(Enemy* enemy){
    m_enemy = enemy;
}

ForestTile::ForestTile(){
}

void ForestTile::printTile(bool printHero){
    std::cout << "/\\";
    Tile::printCharacter("/\\", printHero);
    std::cout << "/\\";
}