//
// Created by nikol on 04.12.2020.
//

#ifndef MAIN_CPP_CHEST_H
#define MAIN_CPP_CHEST_H

#include "Weapon.h"

class Chest {
    Weapon* m_weapon;
public:
    Chest(Weapon* weapon);
    Weapon* getWeapon();
};


#endif //MAIN_CPP_CHEST_H
