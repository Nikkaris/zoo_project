//
// Created by nikol on 19.11.2020.
//

#include "Hero.h"

Hero::Hero(){
    m_agility = 1;
    m_strenght = 1;
    m_charisma = 1;
    m_name = "";
    m_equippedWeapon = nullptr;
    m_equippedArmor = nullptr;
    m_inventory = new Inventory();
}

void Hero::printInfo(){
    std::cout << std::endl;
    std::cout << "Name of hero: " << m_name << "\n";
    std::cout << "Strength: " << m_strenght << "\n";
    std::cout << "Agility: " << m_agility << "\n";
    std::cout << "Charisma: " << m_charisma << "\n";
    if (m_equippedWeapon != nullptr){
        std::cout << "Equipped weapon:\n";
        m_equippedWeapon->printInfo();
    }
    if (m_equippedArmor != nullptr){
        std::cout << "Armor weapon:\n";
        m_equippedArmor->printInfo();
    }
    std::cout << "\n";
}

void Hero::setHeroName(std::string name){
    m_name = name;
}

std::string Hero::getHeroName(){
    return m_name;
}

void Hero::takeWeapon(Weapon* weapon){
    m_inventory->addWeapon(weapon);
}

void Hero::takeArmor(Armor* armor){
    m_inventory->addArmor(armor);
}

void Hero::takePotion(Potion* potion){
    m_inventory->addPotion(potion);
}

void Hero::equipWeapon(int choice){
    m_equippedWeapon = m_inventory->getWeapon(choice);
}

void Hero::equipArmor(int choice){
    m_equippedArmor = m_inventory->getArmor(choice);
}

void Hero::discardWeapon(int choice){
    m_inventory->discardItem(choice, 0);
}

void Hero::discardArmor(int choice){
    m_inventory->discardItem(choice, 1);
}

void Hero::discardPotion(int choice) {
    m_inventory->discardItem(choice, 2);
}

int Hero::getHeroStrength(){
    return m_strenght;
}

int Hero::getHeroAgility(){
    return m_agility;
}

int Hero::getHeroCharisma(){
    return m_charisma;
}

void Hero::printInventory(){
    m_inventory->printInventory();
}

void Hero::setAllHeroAttributes(int bonusStrength, int bonusAgility, int bonusCharisma){
    m_strenght += bonusStrength;
    m_agility += bonusAgility;
    m_charisma += bonusCharisma;
}
