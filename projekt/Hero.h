//
// Created by nikol on 19.11.2020.
//

#ifndef PROJEKT_HERO_H
#define PROJEKT_HERO_H

#include <iostream>
#include <vector>

#include "Weapon.h"
#include "Armor.h"
#include "Potion.h"

class Hero {
    std::string m_name;
    int m_strenght;
    int m_agility;
    int m_charisma;
    std::vector<Weapon*> m_weapons;
    std::vector<Armor*> m_armors;
    std::vector<Potion*> m_potions;
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
    std::string getHeroName();
    int getHeroStrenght();
    int getHeroAgility();
    int getHeroCharisma();
    void printInventory();
    void printInventoryWeapons();
    void printInventoryArmors();
    void printInventoryPotions();
    void setAllHeroAttributes(int bonusStrenght, int bonusAgility, int bonusCharisma);
    int getPlayerDialogInput(int min, int max, std::string text);
    void createHero();
};


#endif //PROJEKT_HERO_H
