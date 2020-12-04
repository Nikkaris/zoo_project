//
// Created by nikol on 04.12.2020.
//

#include "Potion.h"

Potion::Potion(std::string name, int healthBonus): Item(name, "potion"){
    m_healthBonus = healthBonus;
}

int Potion::getHealthBonus(){
    return m_healthBonus;
}