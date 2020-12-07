//
// Created by nikol on 06.12.2020.
//

#ifndef MAIN_CPP_INVENTORY_H
#define MAIN_CPP_INVENTORY_H

#include <vector>

#include "Weapon.h"
#include "Armor.h"
#include "Potion.h"

class Inventory {
    std::vector<Weapon*> m_weapons;
    std::vector<Armor*> m_armors;
    std::vector<Potion*> m_potions;
public:
    Inventory();
    void addWeapon(Weapon* weapon);
    void addArmor(Armor* armor);
    void addPotion(Potion* potion);
    Weapon* getWeapon(int choice);
    Armor* getArmor(int choice);
    void discardItem(int choice, int which);
    template <class T>
    void discardItem(T &items, int choice);
    void printInventory();
    template <class T>
    void printInventoryItems(T items);
};


#endif //MAIN_CPP_INVENTORY_H
