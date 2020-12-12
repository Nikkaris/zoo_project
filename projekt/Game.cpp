//
// Created by nikol on 19.11.2020.
//

#include "Game.h"

Game::Game(Map* map, Hero* hero, StoryTeller* story){
    m_map = map;
    m_hero = hero;
    m_story = story;
    m_hero->learnInteraction(new StealCoins);
    m_hero->learnInteraction(new Trade);
    printProlog();
    printMenu();
}

void Game::printProlog() {
    m_story->printChapterOne();
    //setting name
    std::string newName;
    std::cout << "Tell me, what is your name?" << std::endl;
    std::cin >> newName;
    m_hero->setHeroName(newName);
    std::cout << std::endl;
    std::cout << "Did you say " << m_hero->getName() << "? What a wonderful name!" << std::endl;

    heroAttributes attributes = m_story->chooseHeroAttributes();
    std::cout << attributes.strength << std::endl;
    m_hero->setAllHeroAttributes(attributes.strength, attributes.agility, attributes.charisma);
}

char Game::getPlayerInput(){
    char playerInput;
    std::cin >> playerInput;
    return playerInput;
}

void Game::printMenu(){
    while (m_map->getCurrentLocationIndex() < m_map->getLocations().size()-1) {
        if (m_map->getCurrentLocationIndex() != 0) {
            m_story->printChapter(m_map->getCurrentLocationIndex() + 1);
        }
        m_map->printLocationInfo();
        locationPrintMenu();
        std::cout << "What do you want to do?\n     1. Go to next location\n";
        whatToDo();
    }
    /*std::cout << "You are now in final location.... Final boss is coming....." << std::endl;
    std::cout << "Oh wait a moment, we dont have fighting system, You died" << std::endl;*/
    m_story->printChapter(8);
}

void Game::whatToDo(){
    char playerInput = getPlayerInput();
    if (playerInput == '1'){
        m_map->printSideLocations();
    } else if (playerInput == '2'){
        m_hero->manageInventory();
    }
}

void Game::locationPrintMenu(){
    tileCoordinates coor = m_map->getTileCoordinates();
    Location* currentLocation = m_map->getCurrentLocation();
    while (coor.x < currentLocation->getLocationSize()-1 or coor.y < currentLocation->getLocationSize()-1) {
        m_hero->printInfo();
        m_map->printLocation();
        std::cout << "What do you want to do? \n";
        std::cout << "\t 1. Move on tile \n";
        std::cout << "\t 2. Manage inventory \n";
        if (m_map->getEnemy() != nullptr){
            std::cout << "\t 5. Attack Enemy \n";
        }
        if (m_map->getChest() != nullptr){
            std::cout << "\t 4. Open chest \n";
        }
        if (m_map->getFriendlyCharacter() != nullptr){
            std::cout << "\t 6. Interact witch NPC \n";
        }
        std::cout << "\t 3. exit \n";
        whatToDo2();
        coor = m_map->getTileCoordinates();
    }
}

void Game::whatToDo2(){
    char playerInput = getPlayerInput();
    if (playerInput == '1'){
        m_map->printTileSides();
    } else if (playerInput == '2'){
        m_hero->manageInventory();
    } else if (playerInput == '3') {
        m_map->setTileCoordinatesToExit();
    } else if (playerInput == '4'){
        bool emptyChest = m_hero->inspectChest(m_map->getChest());
        if (emptyChest){
            m_map->removeChest();
        }
    } else if (playerInput == '5'){
        std::cout << "utocim \n";
    } else if (playerInput == '6'){
        m_hero->makeInteraction(m_map->getFriendlyCharacter());
    }
}

Game::~Game(){
    delete m_map;
    delete m_hero;
}