//
// Created by nikol on 19.11.2020.
//

#include "Hero.h"
#include "Interaction.h"

Hero::Hero(){
    m_agility = 1;
    m_strength = 1;
    m_charisma = 1;
    m_coins = 0;
    m_name = "";
    m_equippedWeapon = nullptr;
    m_equippedArmor = nullptr;
    m_inventory = new Inventory();
}

void Hero::printInfo(){
    std::cout << std::endl;
    std::cout << "Name of hero: " << m_name << "\n";
    std::cout << "Strength: " << m_strength << "\n";
    std::cout << "Agility: " << m_agility << "\n";
    std::cout << "Charisma: " << m_charisma << "\n";
    std::cout << "Coins: " << m_coins << "\n";
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

void Hero::takeWeapon(Weapon* weapon){
    m_inventory->addWeapon(weapon);
}

void Hero::takeArmor(Armor* armor){
    m_inventory->addArmor(armor);
}

void Hero::takePotion(Potion* potion){
    m_inventory->addPotion(potion);
}

void Hero::addCoins(int howMany){
    m_coins += howMany;
}

void Hero::setAllHeroAttributes(int bonusStrength, int bonusAgility, int bonusCharisma){
    m_strength += bonusStrength;
    m_agility += bonusAgility;
    m_charisma += bonusCharisma;
}

void Hero::makeInteraction(FriendlyCharacter* friendlyCharacter){
    // print all interactions
    std::cout << "Hi my name is " << friendlyCharacter->getName() << "\n";
    std::cout << "Choose interaction:\n";
    for (int i = 0; i < m_interactions.size(); i++){
        std::cout << "[" << i << "]" << m_interactions.at(i)->getName() << "\n";
    }
    // choose from interactions
    int playerInput = 0;
    std::cin >> playerInput;

    // call interaction
    m_interactions.at(playerInput)->makeInteraction(this, friendlyCharacter);
}

void Hero::learnInteraction(Interaction* interaction){
    std::cout << m_interactions.size();
    m_interactions.push_back(interaction);
    std::cout << m_interactions.size();
}

void Hero::manageInventory(){
    int choice;
    printManageInventory();
    char playerInput;
    std::cin >> playerInput;
    while (playerInput != '6'){
        std::cout << "Which one?\n";
        std::cin >> choice;
        if (playerInput == '1'){
            Weapon* weapon = m_inventory->getWeapon(choice);
            if (weapon != nullptr){
                if (m_equippedWeapon != nullptr){
                    m_inventory->addWeapon(m_equippedWeapon);
                }
                m_equippedWeapon = weapon;
            }
        } else if (playerInput == '2'){
            Armor* armor = m_inventory->getArmor(choice);
            if (armor != nullptr) {
                if (m_equippedWeapon != nullptr){
                    m_inventory->addArmor(m_equippedArmor);
                }
                m_equippedArmor = armor;
            }
        } else if (playerInput == '3'){
            m_inventory->discardItem(choice, itemType::weapon);
        } else if (playerInput == '4'){
            m_inventory->discardItem(choice, itemType::armor);
        } else if (playerInput == '5'){
            m_inventory->discardItem(choice, itemType::potion);
        }
        printManageInventory();
        std::cin >> playerInput;
    }
}

void Hero::printManageInventory(){
    m_inventory->printInventory();
    std::cout << "1. Equip weapon\n";
    std::cout << "2. Equip armor\n";
    std::cout << "3. Discard weapon\n";
    std::cout << "4. Discard armor\n";
    std::cout << "5. Discard potion\n";
    std::cout << "6. Go back\n";
}

bool Hero::inspectChest(Chest* chest){
    Item* item;
    std::cout << "You have found: \n";
    if (chest->getWeapon() != nullptr){
        item = chest->getWeapon();
    } else if (chest->getArmor() != nullptr){
        item = chest->getArmor();
    } else if (chest->getPotion() != nullptr){
        item = chest->getPotion();
    }
    item->printInfo();
    std::cout << "Would you like to take it?\n\t1. Yes\n\t2. No\n";
    char playerInput;
    std::cin >> playerInput;
    if (playerInput == '1'){
        std::cout << "You are taking " << item->getName() << " from chest...\n";
        if (item->getItemType() == itemType::weapon){
            m_inventory->addWeapon(chest->getWeapon());
        } else if (item->getItemType() == itemType::armor){
            m_inventory->addArmor(chest->getArmor());
        } else if (item->getItemType() == itemType::potion){
            m_inventory->addPotion(chest->getPotion());
        }
        return true;
    }
    else {
        return false;
    }
}
