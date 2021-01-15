//
// Created by nikol on 19.11.2020.
//

#include "Game.h"

int Game::m_difficulty = 0;

Game::Game(){
}

void Game::startGame(){
    std::cout << "Main menu\n";
    std::cout << "\t[1] Start game\n";
    std::cout << "\t[2] Print help - WIP\n";
    std::cout << "\t[3] Exit game\n";
    int choice;
    do {
        std::cin >> choice;
        if (choice == 1){
            chooseDifficulty();
            setupGame();
            printStart();
            mapControl();
        } else if (choice == 2){
            //print help
        } else if (choice == 3){
            exit(0);
        }
    } while (choice != 1);
}

void Game::chooseDifficulty(){
    std::cout << "Choose difficulty:\n";
    std::cout << "\t[1] Easy\n";
    std::cout << "\t[2] Normal\n";
    std::cout << "\t[3] Hard\n";
    int choice;
    do {
        std::cin >> choice;
    } while (choice < 1 or choice > 3);
    m_difficulty = choice;
}

void Game::setupGame(){
    m_hero = new Hero;
    m_map = new Map;
    m_story = new StoryTeller;
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
    m_hero->checkInteractions();
}

char Game::getPlayerInput(){
    char playerInput;
    std::cin >> playerInput;
    return playerInput;
}

void Game::mapControl(){
    while (m_map->getCurrentLocationIndex() < m_map->getLocations().size()-1) {
        if (m_map->getCurrentLocationIndex() != 0 and !m_map->getVisited()) {
            m_story->printChapter(m_map->getCurrentLocationIndex() + 1);
            m_map->setVisited();
        }
        m_map->printLocationInfo();
        PrintLocationMenu();
        m_map->printSideLocations();
    }
    // ending
    m_story->printChapter(8);
}

void Game::PrintLocationMenu(){
    while (m_map->getTileType() != tileType::exit) {
        m_hero->printBasicInfo();
        m_map->printLocation();
        std::cout << "What do you want to do? \n";
        std::cout << "\t[1] Move on tile \n";
        if (m_map->getEnemy() != nullptr){
            std::cout << "\t[2] Attack Enemy \n";
        }
        if (m_map->getChest() != nullptr){
            std::cout << "\t[2] Open chest ";
            if (m_map->getChest()->getLocked()){
                std::cout << "- Locked - Key " << m_map->getChest()->getID() << "\n";
            } else {
                std::cout << "- Unlocked\n";
            }
        }
        if (m_map->getFriendlyCharacter() != nullptr){
            std::cout << "\t[2] Interact witch NPC \n";
        }
        std::cout << "\t[H] Print hero statistics \n";
        std::cout << "\t[I] Manage inventory \n";
        std::cout << "\t[M] Print World Map \n";
        std::cout << "\t[L] Change location - testing \n";
        whatToDoLocation();
    }
}

void Game::whatToDoLocation(){
    char playerInput = getPlayerInput();
    if (playerInput == '1'){
        m_map->printTileSides();
    } else if (playerInput == '2' and m_map->getChest() != nullptr){
        bool emptyChest = m_hero->unlockChest(m_map->getChest());
        if (emptyChest) {
            m_map->removeChest();
        }
    } else if (playerInput == '2' and m_map->getEnemy() != nullptr){
        m_hero->fightEnemy(m_map->getEnemy());
        m_map->removeEnemy();
    } else if (playerInput == '2' and m_map->getFriendlyCharacter() != nullptr) {
        m_hero->makeInteraction(m_map->getFriendlyCharacter());
    } else if (playerInput == 'H') {
        m_hero->printAllInfo();
    } else if (playerInput == 'I'){
        m_hero->manageInventory();
    } else if (playerInput == 'L'){
        m_map->changeLocation();
    } else if (playerInput == 'M') {
        printWorldMap();
    } else {
        std::cout << "That is not an option\n";
    }
}

void Game::printWorldMap(){
    std::string line;
    std::ifstream input ("../TextFiles/map.txt");
    if(input.is_open()) {
        while(!input.eof()) {
            std::getline(input, line);
            std::cout << line << std::endl;
        }
        input.close();
    }
}

int Game::getDifficulty(){
    return m_difficulty;
}

Game::~Game(){
    delete m_map;
    delete m_hero;
    delete m_story;
}