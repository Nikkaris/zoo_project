//
// Created by nikol on 04.12.2020.
//

#include "Armor.h"

Armor::Armor(std::string name, int armorBonus): Item(name, itemType::armor){
    m_armorBonus = armorBonus;
}

int Armor::getArmorBonus(){
    return m_armorBonus;
}

void Armor::printInfo(){
    std::cout << "\tName: " << m_name << "\n";
    std::cout << "\tArmor: " << m_armorBonus << "\n";
}