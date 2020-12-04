//
// Created by nikol on 04.12.2020.
//

#include "Chest.h"

Chest::Chest(Weapon* weapon){
    m_weapon = weapon;
    m_armor = nullptr;
    m_potion = nullptr;
}

Chest::Chest(Armor* armor){
    m_armor = armor;
    m_weapon = nullptr;
    m_potion = nullptr;
}

Chest::Chest(Potion* potion){
    m_potion = potion;
    m_weapon = nullptr;
    m_armor = nullptr;
}

Weapon* Chest::getWeapon(){
    return m_weapon;
}

Armor* Chest::getArmor(){
    return m_armor;
}

Potion* Chest::getPotion(){
    return m_potion;
}