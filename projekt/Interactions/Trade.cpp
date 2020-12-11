//
// Created by dalib on 11.12.2020.
//

#include "Trade.h"

Trade::Trade(): Interaction("Trade"){
}

void Trade::makeInteraction(Hero* hero, FriendlyCharacter* friendlyCharacter){
    int choice;
    std::cout << "What do you want to do?" << std::endl;
    std::cout << "[1] Buy" << std::endl;
    std::cout << "[2] Sell" << std::endl;
    std::cout << "[3] I changed my mind" << std::endl;
    std::cin >> choice;
    if (choice == 1) {
        friendlyCharacter->printInventory();
        int itemType = chooseItem();
        buyItem(itemType, hero, friendlyCharacter);
    } else if (choice == 2){
        hero->printInventory();
    }
}

int Trade::chooseItem(){
    int choice;
    std::cout << "What do you want to buy?" << std::endl;
    std::cout << "[1] Weapon" << std::endl;
    std::cout << "[2] Armor" << std::endl;
    std::cin >> choice;
    return choice;
}

void Trade::checkItemType() {

}

void Trade::buyItem(int itemType, Hero* hero, FriendlyCharacter* friendlyCharacter){
    int choice;
    std::cout << "Which one?" <<std::endl;
    std::cin >> choice;
    if(itemType == 1) {
        Weapon* weapon = friendlyCharacter->getInventory()->getWeapon(choice);
        friendlyCharacter->getInventory()->discardItem(choice, itemType::weapon);
        hero->getInventory()->addWeapon(weapon);
    } else if (itemType == 2) {
        Armor* armor = friendlyCharacter->getInventory()->getArmor(choice);
        friendlyCharacter->getInventory()->discardItem(choice, itemType::armor);
        hero->getInventory()->addArmor(armor);
    }
}