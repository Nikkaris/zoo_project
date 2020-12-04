//
// Created by nikol on 19.11.2020.
//

#include "Game.h"

Game::Game(Map* map, Hero* hero, StoryTeller* story){
    m_map = map;
    m_hero = hero;
    m_story = story;
    printProlog();
    printMenu();
}

void Game::printProlog() {
    m_story->printChapter(1);
    m_hero->createHero();
    //m_hero->printInfo();
}

char Game::getPlayerInput(){
    char playerInput;
    std::cin >> playerInput;
    return playerInput;
}

void Game::printMenu(){
    while (m_map->getCurrentLocationIndex() < m_map->getLocations().size()-1) {
        m_map->printLocationInfo();
        locationPrintMenu();
        std::cout << "What do you want to do?\n     1. Go to next location\n";
        whatToDo();
    }
    std::cout << "You are now in final location.... Final boss is coming....." << std::endl;
    std::cout << "Oh wait a moment, we dont have fighting system, You died" << std::endl;
}

void Game::whatToDo(){
    if (getPlayerInput() == '1'){
        m_map->printSideLocations();
    }
}

void Game::whatToDo2(){
    char playerInput = getPlayerInput();
    if (playerInput == '1'){
        m_map->printTileSides();
    } else if (playerInput == '2'){
        std::cout << "Utocim" << "\n";
    } else if (playerInput == '3') {
        m_map->setTileCoordinatesToExit();
    }
}

void Game::locationPrintMenu(){
    tileCoordinates coor = m_map->getTileCoordinates();
    while (coor.x < locationSize-1 or coor.y < locationSize-1) {
        m_map->printLocation();
        std::cout << "What do you want to do? \n";
        std::cout << "\t 1. Move on tile \n";
        if (m_map->getEnemy() != nullptr){
            std::cout << "\t 2. Attack Enemy \n";
        }
        if (m_map->getChest() != nullptr){
            std::cout << "\t 2. Open chest \n";
        }
        std::cout << "\t 3. exit \n";
        whatToDo2();
        coor = m_map->getTileCoordinates();
    }
}

Game::~Game(){
    delete m_map;
    delete m_hero;
}