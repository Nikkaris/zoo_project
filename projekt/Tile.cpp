//
// Created by nikol on 24.11.2020.
//

#include "Tile.h"

Tile::Tile(){
    m_enemy = nullptr;
    m_chest = nullptr;
}

Tile::Tile(Enemy* enemy){
    m_enemy = enemy;
    m_chest = nullptr;
}

Tile::Tile(Chest* chest){
    m_chest = chest;
    m_enemy = nullptr;
}

void Tile::printCharacter(std::string tileSymbol, bool printHero){
    if (printHero){
        std::cout << "**";
    } else if (m_enemy != nullptr){
        std::cout << "E" << m_enemy->getEnemyLevel();
    } else if (m_chest != nullptr){
        std::cout << "CH";
    } else {
        std::cout << tileSymbol;
    }
}

Enemy* Tile::getEnemy(){
    return m_enemy;
}

Chest* Tile::getChest(){
    return m_chest;
}

Tile::~Tile(){

}