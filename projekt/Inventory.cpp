//
// Created by nikol on 06.12.2020.
//

#include "Inventory.h"

Inventory::Inventory(){
}

void Inventory::addWeapon(Weapon* weapon){
    m_weapons.push_back(weapon);
}

void Inventory::addArmor(Armor* armor){
    m_armors.push_back(armor);
}
void Inventory::addPotion(Potion* potion){
    m_potions.push_back(potion);
}

Weapon* Inventory::getWeapon(int choice){
    if (choice < m_weapons.size()) {
        Weapon *weapon = m_weapons.at(choice);
        m_weapons.at(choice) = nullptr;
        return weapon;
    } else {
        std::cout << "There is no such weapon!\n";
        return nullptr;
    }
}

Armor* Inventory::getArmor(int choice){
    if (choice < m_armors.size()) {
        Armor *armor = m_armors.at(choice);
        m_armors.at(choice) = nullptr;
        return armor;
    } else {
        std::cout << "There is no such armor!\n";
        return nullptr;
    }
}

void Inventory::discardWeapon(int choice){
    if (choice < m_weapons.size()) {
        delete m_weapons.at(choice);
        m_weapons.at(choice) = nullptr;
    }
}

void Inventory::discardArmor(int choice){
    if (choice < m_armors.size()) {
        delete m_armors.at(choice);
        m_armors.at(choice) = nullptr;
    }
}

void Inventory::discardPotion(int choice) {
    if (choice < m_potions.size()) {
        delete m_potions.at(choice);
        m_potions.at(choice) = nullptr;
    }
}

void Inventory::printInventory(){
    std::cout << "+-------------------------+\n";
    std::cout << "Weapons\n";
    printInventoryWeapons();
    std::cout << "+-------------------------+\n";
    std::cout << "Armors\n";
    printInventoryArmors();
    std::cout << "+-------------------------+\n";
    std::cout << "Potions\n";
    printInventoryPotions();
    std::cout << "+-------------------------+\n";
}

void Inventory::printInventoryWeapons(){
    int itemCounter = 0;
    for (auto weapon:m_weapons){
        itemCounter++;
        if (weapon != nullptr) {
            std::cout << itemCounter << ".";
            weapon->printInfo();
        }
    }
}

void Inventory::printInventoryArmors(){
    int itemCounter = 0;
    for (auto armor:m_armors){
        itemCounter++;
        if (armor != nullptr) {
            std::cout << itemCounter << ".";
            armor->printInfo();
        }
    }
}

void Inventory::printInventoryPotions(){
    int itemCounter = 0;
    for (auto potion:m_potions){
        itemCounter++;
        if (potion != nullptr) {
            std::cout << itemCounter << ".";
            potion->printInfo();
        }
    }
}