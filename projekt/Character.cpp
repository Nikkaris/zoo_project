//
// Created by nikol on 07.12.2020.
//

#include "Character.h"

int Character::getStrength(){
    return m_strength;
}

int Character::getAgility(){
    return m_agility;
}

int Character::getCharisma(){
    return m_charisma;
}

int Character::getCoins(){
    return m_coins;
}

void Character::removeCoins(){
    m_coins = 0;
}

std::string Character::getName(){
    return m_name;
}

void Character::printInventory(){
    m_inventory->printInventory();
}

Inventory* Character::getInventory(){
    return m_inventory;
}