//
// Created by nikol on 24.11.2020.
//

#include "Tile.h"

Tile::Tile(){
    m_enemy = nullptr;
}

void Tile::printCharacter(std::string tileSymbol, bool printHero) {
    if (printHero){
        std::cout << "**";
    } else if (m_enemy != nullptr){
        std::cout << "E" << m_enemy->getEnemyLevel();
    } else {
        std::cout << tileSymbol;
    }
}

void Tile::setEnemy(Enemy* enemy){
    m_enemy = enemy;
}

Enemy* Tile::getEnemy(){
    return m_enemy;
}

Tile::~Tile(){

}