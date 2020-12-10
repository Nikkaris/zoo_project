//
// Created by nikol on 19.11.2020.
//

#ifndef PROJEKT_HERO_H
#define PROJEKT_HERO_H

#include <iostream>
#include <vector>

#include "Character.h"
#include "FriendlyCharacter.h"
#include "Chest.h"

class Interaction;

class Hero: public Character {
    std::vector<Interaction*> m_interactions;
public:
    Hero();
    void printInfo();
    void setHeroName(std::string name);
    void takeWeapon(Weapon* weapon);
    void takeArmor(Armor* armor);
    void takePotion(Potion* potion);
    void addCoins(int howMany);
    void setAllHeroAttributes(int bonusStrength, int bonusAgility, int bonusCharisma);
    void makeInteraction(FriendlyCharacter* friendlyCharacter);
    void learnInteraction(Interaction* interaction);
    void manageInventory();
    bool inspectChest(Chest* chest);
private:
    void printManageInventory();
};


#endif //PROJEKT_HERO_H
