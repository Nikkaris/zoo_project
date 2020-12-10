//
// Created by nikol on 04.12.2020.
//

#ifndef MAIN_CPP_CHEST_H
#define MAIN_CPP_CHEST_H

#include "Items/Weapon.h"
#include "Items/Armor.h"
#include "Items/Potion.h"

class Chest {
    Weapon* m_weapon;
    Armor* m_armor;
    Potion* m_potion;
public:
    Chest(Weapon* weapon);
    Chest(Armor* armor);
    Chest(Potion* potion);
    Weapon* getWeapon();
    Armor* getArmor();
    Potion* getPotion();
};


#endif //MAIN_CPP_CHEST_H
