//
// Created by nikol on 19.11.2020.
//

#ifndef PROJEKT_HERO_H
#define PROJEKT_HERO_H

#include <iostream>
#include <vector>
#include <iomanip>

#include "Character.h"
#include "FriendlyCharacter.h"
#include "Chest.h"
#include "Enemy.h"

class Interaction;

class Hero: public Character {
    std::vector<Interaction*> m_interactions;
    int m_level;
    int m_xp;
    int m_maxXp;
public:
    Hero();
    void printAllInfo();
    void printBasicInfo();
    void setHeroName(std::string name);
    void addCoins(int howMany);
    void setAllHeroAttributes(int bonusStrength, int bonusAgility, int bonusCharisma);
    void makeInteraction(FriendlyCharacter* friendlyCharacter);
    void learnInteraction(Interaction* interaction);
    void manageInventory();
    bool unlockChest(Chest* chest);
    bool inspectChest(Chest* chest);
    void attackEnemy(Enemy* enemy);
    void drinkPotion(Potion* potion);
    void gainXp(int xp);
    void levelUp();
    ~Hero();
private:
    void printManageInventory();
    void equipWeapon(int choice);
    void equipArmor(int choice);
};


#endif //PROJEKT_HERO_H
