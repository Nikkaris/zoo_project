//
// Created by nikol on 24.11.2020.
//

#include "Tile.h"

Tile::Tile(){
    m_enemy = nullptr;
    m_chest = nullptr;
    m_friendlyCharacter = nullptr;
}

Tile::Tile(Enemy* enemy){
    m_enemy = enemy;
    m_chest = nullptr;
    m_friendlyCharacter = nullptr;
}

Tile::Tile(Chest* chest){
    m_chest = chest;
    m_enemy = nullptr;
    m_friendlyCharacter = nullptr;
}

Tile::Tile(FriendlyCharacter* friendlyCharacter){
    m_friendlyCharacter = friendlyCharacter;
    m_enemy = nullptr;
    m_chest = nullptr;
}

void Tile::printCharacter(std::string tileSymbol, bool printHero){
    if (printHero){
        std::cout << "**";
    } else if (m_enemy != nullptr) {
        std::cout << "E" << m_enemy->getEnemyLevel();
    } else if (m_friendlyCharacter != nullptr){
        std::cout << "FR";
    } else if (m_chest != nullptr){
        std::cout << "CH";
    } else {
        std::cout << tileSymbol;
    }
}

void Tile::setEnemy(Enemy* enemy){
    m_enemy = enemy;
}

void Tile::setChest(Chest* chest){
    m_chest = chest;
}

void Tile::setFrendlyCharacter(FriendlyCharacter* friendlyCharacter){
    m_friendlyCharacter = friendlyCharacter;
}

Enemy* Tile::getEnemy(){
    return m_enemy;
}

Chest* Tile::getChest(){
    return m_chest;
}

FriendlyCharacter* Tile::getFriendlyCharacter(){
    return m_friendlyCharacter;
}

void Tile::removeChest(){
    delete m_chest;
    m_chest = nullptr;
}

Tile::~Tile(){

}