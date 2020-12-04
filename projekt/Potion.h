//
// Created by nikol on 04.12.2020.
//

#ifndef MAIN_CPP_POTION_H
#define MAIN_CPP_POTION_H

#include "Item.h"

class Potion: public Item {
    int m_healthBonus;
public:
    Potion(std::string name, int healthBonus);
    int getHealthBonus();
};


#endif //MAIN_CPP_POTION_H
