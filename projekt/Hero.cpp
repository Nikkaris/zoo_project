//
// Created by nikol on 19.11.2020.
//

#include "Hero.h"

Hero::Hero(){
    m_agility = 1;
    m_strenght = 1;
    m_charisma = 1;
}

void Hero::printInfo(){
    std::cout << std::endl;
    std::cout << "Name of hero: " << m_name << std::endl;
    std::cout << "Strenght: " << m_strenght << std::endl;
    std::cout << "Agility: " << m_agility << std::endl;
    std::cout << "Charisma: " << m_charisma << std::endl;
}

void Hero::setAttributeStrenght(int numberOfAttribute){
    m_strenght += numberOfAttribute;
}

void Hero::setAttributeAgility(int numberOfAttribute){
    m_agility += numberOfAttribute;
}

void Hero::setAttributeCharisma(int numberOfAttribute){
    m_charisma += numberOfAttribute;
}

void Hero::setHeroName(std::string name){
   m_name = name;
}

int Hero::getHeroStrenght(){
    return m_strenght;
}

int Hero::getHeroAgility(){
    return m_agility;
}

int Hero::getHeroCharisma(){
    return m_charisma;
}

void Hero::setAllHeroAttributes(int bonusStrenght, int bonusAgility, int bonusCharisma){
    m_strenght += bonusStrenght;
    m_agility += bonusAgility;
    m_charisma += bonusCharisma;
}
