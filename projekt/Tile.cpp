//
// Created by nikol on 24.11.2020.
//

#include "Tile.h"

Tile::Tile(){
    m_enemy = nullptr;
}

void Tile::printCharacter(std::string tileSymbol, bool hero) {
    if(m_enemy != nullptr){
        std::cout << "E" << m_enemy->getEnemyLevel();
    } else if (!hero){
        std::cout << tileSymbol;
    } else {
        std::cout << "**";
    }
}

void Tile::setEnemy(Enemy* enemy){
   m_enemy = enemy;
}

Tile::~Tile(){

}