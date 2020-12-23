//
// Created by nikol on 19.11.2020.
//

#include "Game.h"

Game::Game(){
}


void Game::startGame(){
    m_map = new Map;
    m_hero = new Hero;
    m_story = new StoryTeller;
    m_hero->learnInteraction(new StealCoins);
    m_hero->learnInteraction(new Buy);
    m_hero->learnInteraction(new Sell);
    printMainMenu();
}

void Game::printMainMenu(){
    std::cout << "Main menu\n";
    std::cout << "\t[1] Start game\n";
    std::cout << "\t[2] Print help - WIP\n";
    std::cout << "\t[3] Exit game\n";
    int choice;
    do {
        std::cin >> choice;
        if (choice == 1){
            printStart();
            printMapMenu();
        } else if (choice == 2){
            //print help
        } else if (choice == 3){
            exit(0);
        }
    } while (choice != 1);
}

void Game::printStart() {
    m_story->printChapterOne();
    std::string newName;
    std::cout << "Tell me, what is your name?" << std::endl;
    std::cin >> newName;
    m_hero->setHeroName(newName);
    std::cout << std::endl;
    std::cout << "Did you say " << m_hero->getName() << "? What a wonderful name!" << std::endl;

    heroAttributes attributes = m_story->chooseHeroAttributes();
    m_hero->setAllHeroAttributes(attributes.strength, attributes.agility, attributes.charisma);
}

char Game::getPlayerInput(){
    char playerInput;
    std::cin >> playerInput;
    return playerInput;
}

void Game::printMapMenu(){
    while (m_map->getCurrentLocationIndex() < m_map->getLocations().size()-1) {
        if (m_map->getCurrentLocationIndex() != 0 and !m_map->getVisited()) {
            m_story->printChapter(m_map->getCurrentLocationIndex() + 1);
            m_map->setVisited();
        }
        m_map->printLocationInfo();
        PrintLocationMenu();
        std::cout << "What do you want to do?\n";
        std::cout << "\t[1] Go to next location\n";
        std::cout << "\t[2] Manage inventory\n";
        std::cout << "\t[3] Print map - WIP\n";
        std::cout << "\t[4] Rest - WIP\n";
        whatToDoMap();
    }
    // ending
    m_story->printChapter(8);
}

void Game::whatToDoMap(){
    char playerInput = getPlayerInput();
    if (playerInput == '1'){
        m_map->printSideLocations();
    } else if (playerInput == '2'){
        m_hero->manageInventory();
    }
}

void Game::PrintLocationMenu(){
    while (m_map->getTileType() != tileType::exit) {
        m_hero->printInfo();
        m_map->printLocation();
        std::cout << "What do you want to do? \n";
        std::cout << "\t[1] Move on tile \n";
        std::cout << "\t[2] Manage inventory \n";
        if (m_map->getEnemy() != nullptr){
            std::cout << "\t[3] Attack Enemy \n";
        }
        if (m_map->getChest() != nullptr){
            std::cout << "\t[3] Open chest ";
            if (m_map->getChest()->getLocked()){
                std::cout << "- Locked - Key " << m_map->getChest()->getID() << "\n";
            } else {
                std::cout << "- Unlocked\n";
            }
        }
        if (m_map->getFriendlyCharacter() != nullptr){
            std::cout << "\t[3] Interact witch NPC \n";
        }
        whatToDoLocation();
    }
}

void Game::whatToDoLocation(){
    char playerInput = getPlayerInput();
    if (playerInput == '1'){
        m_map->printTileSides();
    } else if (playerInput == '2'){
        m_hero->manageInventory();
    } else if (playerInput == '3' and m_map->getChest() != nullptr){
        bool emptyChest = m_hero->unlockChest(m_map->getChest());
        if (emptyChest) {
            m_map->removeChest();
        }
    } else if (playerInput == '3' and m_map->getEnemy() != nullptr){
        m_hero->attackEnemy(m_map->getEnemy());
        m_map->removeEnemy();
    } else if (playerInput == '3' and m_map->getFriendlyCharacter() != nullptr){
        m_hero->makeInteraction(m_map->getFriendlyCharacter());
    } else {
        std::cout << "That is not an option\n";
    }
}

Game::~Game(){
    delete m_map;
    delete m_hero;
}