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
    choice--;
    if (choice < m_weapons.size()) {
        Weapon* weapon = m_weapons.at(choice);
        m_weapons.erase(m_weapons.begin()+choice);
        return weapon;
    } else {
        std::cout << "There is no such weapon!\n";
        return nullptr;
    }
}

Armor* Inventory::getArmor(int choice){
    choice--;
    if (choice < m_armors.size()) {
        Armor* armor = m_armors.at(choice);
        m_armors.erase(m_armors.begin()+choice);
        return armor;
    } else {
        std::cout << "There is no such armor!\n";
        return nullptr;
    }
}

void Inventory::discardItem(int choice, itemType typeOfItem){
    if (typeOfItem == itemType::weapon){
        discardItem(m_weapons, choice);
    } else if (typeOfItem == itemType::armor){
        discardItem(m_armors, choice);
    } else if (typeOfItem == itemType::potion){
        discardItem(m_potions, choice);
    }
}

template <class T>
void Inventory::discardItem(T &items, int choice){
    choice--;
    if (choice < items.size()) {
        items.erase(items.begin()+choice);
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
            std::cout << "[" << itemCounter << "]";
            item->printInfo();
        }
    }
}