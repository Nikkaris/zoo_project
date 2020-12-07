//
// Created by nikol on 19.11.2020.
//

#ifndef PROJEKT_HERO_H
#define PROJEKT_HERO_H

#include <iostream>
#include <vector>

#include "Inventory.h"

class Hero {
    std::string m_name;
    int m_strenght;
    int m_agility;
    int m_charisma;
    Weapon* m_equippedWeapon;
    Armor* m_equippedArmor;
    Inventory* m_inventory;
public:
    Hero();
    void printInfo();
    void setHeroName(std::string name);
    std::string getHeroName();
    void takeWeapon(Weapon* weapon);
    void takeArmor(Armor* armor);
    void takePotion(Potion* potion);
    void equipWeapon(int choice);
    void equipArmor(int choice);
    void discardWeapon(int choice);
    void discardArmor(int choice);
    void discardPotion(int choice);
    int getHeroStrength();
    int getHeroAgility();
    int getHeroCharisma();
    void printInventory();
    void setAllHeroAttributes(int bonusStrength, int bonusAgility, int bonusCharisma);
};


#endif //PROJEKT_HERO_H
