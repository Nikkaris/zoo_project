//
// Created by nikol on 19.11.2020.
//

#include "Hero.h"
#include "Interactions/Interaction.h"

Hero::Hero(){
    m_physicalDamage = 5;
    m_agility = 1;
    m_strength = 1;
    m_charisma = 1;
    m_coins = 0;
    m_name = "";
    m_equippedWeapon = nullptr;
    m_equippedArmor = nullptr;
}

void Hero::printInfo(){
    std::cout << std::endl;
    std::string separator = "--------";
    std::cout << separator << m_name << separator << "\n";
    std::cout << "HP: " << m_health << "/100\n";
    std::cout << "Physical damage: " << getPhysicalDamage() << "\n";
    std::cout << "Strength: " << m_strength << "\n";
    std::cout << "Agility: " << m_agility << "\n";
    std::cout << "Charisma: " << m_charisma << "\n";
    std::cout << "Coins: " << m_coins << "\n";
    if (m_equippedWeapon != nullptr){
        std::cout << "Equipped weapon:\n";
        m_equippedWeapon->printInfo();
    } else {
        std::cout << "No equipped weapon\n";
    }
    if (m_equippedArmor != nullptr){
        std::cout << "Equipped armor:\n";
        m_equippedArmor->printInfo();
    } else {
        std::cout << "No equipped armor\n";
    }
    std::cout << std::setw(m_name.length()+(2*separator.length())+1) << std::setfill('-') << "\n";
}

void Hero::setHeroName(std::string name){
    m_name = name;
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
        std::cout << "\t[" << i+1 << "]" << m_interactions.at(i)->getName() << "\n";
    }
    // choose from interactions
    int playerInput = 0;
    std::cin >> playerInput;
    playerInput--;

    // call interaction
    if (playerInput < m_interactions.size()) {
        m_interactions.at(playerInput)->makeInteraction(this, friendlyCharacter);
    } else {
        std::cout << "That is not an option\n";
    }
}

void Hero::learnInteraction(Interaction* interaction){
    m_interactions.push_back(interaction);
}

void Hero::printManageInventory(){
    m_inventory->printInventory();
    std::cout << "\t[1] Equip weapon\n";
    std::cout << "\t[2] Equip armor\n";
    std::cout << "\t[3] Drink potion\n";
    std::cout << "\t[4] Discard weapon\n";
    std::cout << "\t[5] Discard armor\n";
    std::cout << "\t[6] Discard potion\n";
    std::cout << "\t[7] Go back\n";
}

void Hero::manageInventory(){
    int choice;
    printManageInventory();
    char playerInput;
    std::cin >> playerInput;
    while (playerInput != '7'){
        if (playerInput >= '1' and playerInput <= '6') {
            std::cout << "Which one?\n";
            std::cin >> choice;
            if (playerInput == '1') {
                equipWeapon(choice);
            } else if (playerInput == '2') {
                equipArmor(choice);
            } else if (playerInput == '3') {
                drinkPotion(m_inventory->getPotion(choice));
            } else if (playerInput == '4') {
                m_inventory->discardItem(choice, itemType::weapon);
            } else if (playerInput == '5') {
                m_inventory->discardItem(choice, itemType::armor);
            } else if (playerInput == '6') {
                m_inventory->discardItem(choice, itemType::potion);
            }
        } else {
            std::cout << "That is not an option\n";
        }
        printManageInventory();
        std::cin >> playerInput;
    }
}

void Hero::equipWeapon(int choice){
    Weapon* weapon = m_inventory->getWeapon(choice);
    if (weapon != nullptr){
        if (m_equippedWeapon != nullptr){
            m_inventory->addWeapon(m_equippedWeapon);
        }
        m_equippedWeapon = weapon;
    }
}

void Hero::equipArmor(int choice){
    Armor *armor = m_inventory->getArmor(choice);
    if (armor != nullptr) {
        if (m_equippedWeapon != nullptr) {
            m_inventory->addArmor(m_equippedArmor);
        }
        m_equippedArmor = armor;
    }
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
    std::cout << "Would you like to take it?\n\t[1] Yes\n\t[2] No\n";
    char playerInput;
    std::cin >> playerInput;
    if (playerInput == '1'){
        std::cout << "You have taken " << item->getName() << " from chest\n";
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

void Hero::attackEnemy(Enemy* enemy){
    int choice = 0;
    while (getHealth() > 0 and enemy->getHealth() > 0){
        printInfo();
        std::cout << "Enemy hp: " << enemy->getHealth() << std::endl;
        std::cout << "What do you want to do?" << std::endl;
        std::cout << "\t[1] Attack\n";
        std::cout << "\t[2] Manage inventory\n";
        std::cout << "\t[3] Rest - WIP\n";
        std::cin >> choice;
        if(choice == 1) {
            enemy->takeDamage(getPhysicalDamage());
            std::cout << "You dealt: " << getPhysicalDamage() << " damage\n";
            std::cout << "You suffered: " << takeDamage(enemy->getPhysicalDamage()) << " damage\n";
        } else if(choice == 2) {
            manageInventory();
        }
    }
    if(m_health <= 0) {
        std::cout << "You died. GAME OVER\n";
        exit(0);
    } else {
        std::cout << "Enemy is dead. WP\n";
    }
}

void Hero::drinkPotion(Potion* potion){
    if (potion != nullptr) {
        std::cout << "You are drinking: " << potion->getName() << "\n";
        if ((m_health + potion->getHealthBonus() <= 100)) {
            m_health += potion->getHealthBonus();
        } else {
            m_health = 100;
        }
    }
}

Hero::~Hero(){
    for (auto &interaction: m_interactions){
        if (interaction != nullptr){
            delete interaction;
        }
    }
}
