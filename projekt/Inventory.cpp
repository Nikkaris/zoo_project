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

void Inventory::discardItem(int choice, int which){
    if (which == 0){
        discardItem(m_weapons, choice);
    } else if (which == 1){
        discardItem(m_armors, choice);
    } else if (which == 2){
        discardItem(m_potions, choice);
    }
}

template <class T>
void Inventory::discardItem(T &items, int choice){
    if (choice < items.size()) {
        delete items.at(choice);
        items.at(choice) = nullptr;
    }
}

void Inventory::printInventory(){
    std::cout << "+-------------------------+\n";
    std::cout << "Weapons\n";
    printInventoryItems(m_weapons);
    std::cout << "+-------------------------+\n";
    std::cout << "Armors\n";
    printInventoryItems(m_armors);
    std::cout << "+-------------------------+\n";
    std::cout << "Potions\n";
    printInventoryItems(m_potions);
    std::cout << "+-------------------------+\n";
}

template <class T>
void Inventory::printInventoryItems(T items){
    int itemCounter = 0;
    for (auto item:items){
        itemCounter++;
        if (item != nullptr) {
            std::cout << itemCounter << ".";
            item->printInfo();
        }
    }
}