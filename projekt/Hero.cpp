//
// Created by nikol on 19.11.2020.
//

#include "Hero.h"

Hero::Hero(){
    m_agility = 1;
    m_strenght = 1;
    m_charisma = 1;
    m_name = "looool";
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

void Hero::setAttributeStrength(int numberOfAttribute){
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
    m_inventory->discardWeapon(choice);
}

void Hero::discardArmor(int choice){
    m_inventory->discardArmor(choice);
}

void Hero::discardPotion(int choice) {
    m_inventory->discardPotion(choice);
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
    m_inventory->printInventory();
}

void Hero::setAllHeroAttributes(int bonusStrenght, int bonusAgility, int bonusCharisma){
    m_strenght += bonusStrenght;
    m_agility += bonusAgility;
    m_charisma += bonusCharisma;
}

int Hero::getPlayerDialogInput(char min, char max, std::string errorText) {
    char playerInput;
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

    dialogOption = getPlayerDialogInput('1', '3', "That is not answering my question");

    if(dialogOption == 1) {
        std::cout << "Oh, so you are norseman. You seemed to me kinda muscular..." << std::endl;
        setAttributeStrength(1);
    } else if (dialogOption == 2) {
        std::cout << "Oh, so you are from West. Western people are very agile and good in sneaking..." << std::endl;
        setAttributeAgility(1);
    } else if (dialogOption == 3){
        std::cout << "Oh, so you are from East. Eastern people are talkative." << std::endl;
        setAttributeCharisma(1);
    }

    std::cout << std::endl;
    std::cout << "I see that you are trying to remember. What is your profession?" << std::endl;
    std::cout << std::endl;
    std::cout << "1. I am travelling merchant. I used to have a lot of friends in many towns" << std::endl;
    std::cout << "2. I think that I was a royal guard" << std::endl;
    std::cout << "3. I do not like to admit, but i was thief. People hired and I accepted..." << std::endl;

    dialogOption = getPlayerDialogInput('1', '3', "That is not answering my question");

    if(dialogOption == 1) {
        std::cout << "That is what I thought. That would explain your personality and temperament." << std::endl;
        setAttributeCharisma(2);
    } else if (dialogOption == 2) {
        std::cout << "That would explain that crest on your armor." << std::endl;
        setAttributeStrength(2);
    } else if (dialogOption == 3) {
        std::cout << "Cape and leather armor, that explain a lot, but do not worry I do not judge you." << std::endl;
        std::cout << "Living in this world is harder than before..." << std::endl;
        setAttributeAgility(2);
    }

    std::cout << std::endl;
    std::cout << "You must be hungry." << std::endl;
    std::cout << "The old man offered you vegetable stew." << std::endl;
    std::cout << "Anyway, my last question is, how would you dealt with combat situation?" << std::endl;
    std::cout << std::endl;
    std::cout << "1. I would not go for face-to-face fight. I would strike from the shadows." << std::endl;
    std::cout << "2. I hate fights, I always considered myself as peaceful being, even in this cruel world." << std::endl;
    std::cout << "3. I love the adrenaline in my blood, I would use my full strength to crush my enemy.." << std::endl;

    dialogOption = getPlayerDialogInput('1', '3', "That is not answering my question");

    if(dialogOption == 1) {
        std::cout << "I agree, when you catch your enemy off-guard. It makes your fight a lot easier." << std::endl;
        setAttributeAgility(1);
    } else if (dialogOption == 2) {
        std::cout << "Nowdays is hard to not fight. Sometimes you just have to. But your answer is not wrong." << std::endl;
        setAttributeCharisma(1);
    } else if (dialogOption == 3) {
        std::cout << "I see, that you are really sure about yourself. And that is not in fact wrong, but its double sided edge" << std::endl;
        setAttributeStrength(1);
    }
}
