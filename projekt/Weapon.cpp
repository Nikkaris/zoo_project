//
// Created by nikol on 04.12.2020.
//

#include "Weapon.h"

Weapon::Weapon(std::string name, int damageBonus): Item(name, "weapon"){
    m_damageBonus = damageBonus;
}

int Weapon::getDamageBonus(){
    return m_damageBonus;
}