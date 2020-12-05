//
// Created by nikol on 19.11.2020.
//

#include "Hero.h"

Hero::Hero(){
    m_agility = 1;
    m_strenght = 1;
    m_charisma = 1;
    m_name = "looool";
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

void Hero::takeWeapon(Weapon* weapon){
    m_weapons.push_back(weapon);
}

void Hero::takeArmor(Armor* armor){
    m_armors.push_back(armor);
}

void Hero::takePotion(Potion* potion){
    m_potions.push_back(potion);
}

std::string Hero::getHeroName(){
    return m_name;
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

void Hero::printInventory(){
    std::cout << "+-------------------------+\n";
    std::cout << "Weapons\n";
    printInventoryWeapons();
    std::cout << "+-------------------------+\n";
    std::cout << "Armors\n";
    printInventoryArmors();
    std::cout << "+-------------------------+\n";
    std::cout << "Potions\n";
    printInventoryPotions();
    std::cout << "+-------------------------+\n";
}

void Hero::printInventoryWeapons(){
    int itemCounter = 0;
    for (auto weapon:m_weapons){
        std::cout << ++itemCounter << ".";
        weapon->printInfo();
    }
}

void Hero::printInventoryArmors(){
    int itemCounter = 0;
    for (auto armor:m_armors){
        std::cout << ++itemCounter << ".";
        armor->printInfo();
    }
}

void Hero::printInventoryPotions(){
    int itemCounter = 0;
    for (auto potion:m_potions){
        std::cout << ++itemCounter << ".";
        potion->printInfo();
    }
}

void Hero::setAllHeroAttributes(int bonusStrenght, int bonusAgility, int bonusCharisma){
    m_strenght += bonusStrenght;
    m_agility += bonusAgility;
    m_charisma += bonusCharisma;
}

int Hero::getPlayerDialogInput(int min, int max, std::string errorText) {
    int playerInput;
    std::cin >> playerInput;
    while (playerInput < min || playerInput > max) {
        std::cout << errorText << std::endl;
        std::cin >> playerInput;
    }
    return playerInput;
}

//first dialogues

void Hero::createHero() {
    std::string newName;
    int dialogOption;

    //setting name
    std::cout << "Tell me, what is your name?" << std::endl;
    std::cin >> newName;
    setHeroName(newName);
    std::cout << std::endl;
    std::cout << "Did you say " << m_name << "? What a wonderful name!" << std::endl;

    //setting starting attributes
    std::cout << std::endl;
    std::cout << "I got a few questions for you." << std::endl;
    std::cout << "Where are you from?" << std::endl;
    std::cout << std::endl;
    std::cout << "1. I am from North, i do not know why but I have everything blurred..." << std::endl;
    std::cout << "2. I am from West, i do not know why but I have everything blurred..." << std::endl;
    std::cout << "3. I am from East, i do not know why but I have everything blurred..." << std::endl;

    dialogOption = getPlayerDialogInput(1, 3, "That is not answering my question");

    if(dialogOption == 1) {
        std::cout << "Oh, so you are norseman. You seemed to me kinda muscular..." << std::endl;
        setAttributeStrenght(1);
    } else if (dialogOption == 2) {
        std::cout << "Oh, so you are from West. Western people are very agile and good in sneaking..." << std::endl;
        setAttributeAgility(1);
    } else if (dialogOption == 3){
        std::cout << "Oh, so you are from East. Eastern people are talkative." << std::endl;
        setAttributeCharisma(1);
    }

    std::cout << std::endl;
    std::cout << "I see that you are trying to remember. What is your proffesion?" << std::endl;
    std::cout << std::endl;
    std::cout << "1. I am travelling merchant. I used to have a lot of friends in many towns" << std::endl;
    std::cout << "2. I think that I was a royal guard" << std::endl;
    std::cout << "3. I do not like to admit, but i was thief. People hired and I accepted..." << std::endl;

    dialogOption = getPlayerDialogInput(1, 3, "That is not answering my question");

    if(dialogOption == 1) {
        std::cout << "That is what I thought" << std::endl;
        setAttributeCharisma(2);
    } else if (dialogOption == 2) {
        std::cout << "That would explain that crest on your armor." << std::endl;
        setAttributeStrenght(2);
    } else if (dialogOption == 3) {
        std::cout << "Cape and leather armor, that explain a lot, but do not worry I do not judge you." << std::endl;
        std::cout << "Living in this world is harder than before..." << std::endl;
        setAttributeAgility(2);
    }
}
