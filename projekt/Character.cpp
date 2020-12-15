//
// Created by nikol on 07.12.2020.
//

#include "Character.h"

Character::Character() {
    m_health = 100;
    m_inventory = new Inventory();
}

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

std::string Character::getName(){
    return m_name;
}

void Character::printInventory(){
    m_inventory->printInventory();
}

Inventory* Character::getInventory(){
    return m_inventory;
}

int Character::getPhysicalDamage() {
    if(m_equippedWeapon != nullptr){
        return m_physicalDamage + (m_strength * 3) + m_equippedWeapon->getDamageBonus();
    } else {
        return m_physicalDamage + (m_strength * 3);
    }
}

float Character::takeDamage(int howMuch){
    float damage;
    if (m_equippedArmor != nullptr) {
        damage = howMuch - (m_equippedArmor->getArmorBonus() / 2);
        m_health -= damage;
    } else {
        damage = howMuch;
        m_health -= damage;
    }
    return damage;
}

int Character::getHealth(){
    return m_health;
}

Character::~Character(){
    if (m_equippedArmor != nullptr){
        delete m_equippedArmor;
    }
    if (m_equippedWeapon != nullptr){
        delete m_equippedWeapon;
    }
    delete m_inventory;
}