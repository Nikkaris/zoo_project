//
// Created by nikol on 19.11.2020.
//

#ifndef PROJEKT_HERO_H
#define PROJEKT_HERO_H

#include <iostream>

class Hero {
    std::string m_name;
    int m_strenght;
    int m_agility;
    int m_charisma;
public:
    Hero();
    void printInfo();
    void setAttributeStrenght(int numberOfAttribute);
    void setAttributeAgility(int numberOfAttribute);
    void setAttributeCharisma(int numberOfAttribute);
    void setHeroName(std::string name);
    int getHeroStrenght();
    int getHeroAgility();
    int getHeroCharisma();
    void setAllHeroAttributes(int bonusStrenght, int bonusAgility, int bonusCharisma);
    int getPlayerDialogInput(int min, int max, std::string text);
    void createHero();
};


#endif //PROJEKT_HERO_H
