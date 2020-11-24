//
// Created by nikol on 19.11.2020.
//

#include "Game.h"

Game::Game(Map* map, Hero* hero){
    m_map = map;
    m_hero = hero;
    printMenu();
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
    if (getPlayerInput()  == '1'){
        m_map->printTileSides();
    }
}

void Game::locationPrintMenu(){
    tileCoordinates coor = m_map->getTileCoordinates();
    while (coor.x < locationSize-1 or coor.y < locationSize-1) {
        m_map->printLocation();
        std::cout << "What do you want to do?\n     1. Move on tile\n";
        whatToDo2();
        coor = m_map->getTileCoordinates();
    }
}

Game::~Game(){
    delete m_map;
    delete m_hero;
}