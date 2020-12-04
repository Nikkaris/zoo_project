//
// Created by nikol on 04.12.2020.
//

#ifndef MAIN_CPP_WEAPON_H
#define MAIN_CPP_WEAPON_H

#include "Item.h"

class Weapon: public Item {
    int m_damageBonus;
public:
    Weapon(std::string name, int damageBonus);
    int getDamageBonus();
};


#endif //MAIN_CPP_WEAPON_H
