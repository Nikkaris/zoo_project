//
// Created by nikol on 04.12.2020.
//

#include "Chest.h"

Chest::Chest(Weapon* weapon){
    m_weapon = weapon;
}

Weapon* Chest::getWeapon(){
   return m_weapon;
}