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
    void setAttributeStrength(int numberOfAttribute);
    void setAttributeAgility(int numberOfAttribute);
    void setAttributeCharisma(int numberOfAttribute);
    void setHeroName(std::string name);
    void takeWeapon(Weapon* weapon);
    void takeArmor(Armor* armor);
    void takePotion(Potion* potion);
    void equipWeapon(int choice);
    void equipArmor(int choice);
    void discardWeapon(int choice);
    void discardArmor(int choice);
    void discardPotion(int choice);
    std::string getHeroName();
    int getHeroStrenght();
    int getHeroAgility();
    int getHeroCharisma();
    void printInventory();
    void setAllHeroAttributes(int bonusStrenght, int bonusAgility, int bonusCharisma);
    int getPlayerDialogInput(char min, char max, std::string text);
    void createHero();
};


#endif //PROJEKT_HERO_H
