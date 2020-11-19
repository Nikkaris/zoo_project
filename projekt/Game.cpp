//
// Created by nikol on 19.11.2020.
//

#include "Game.h"

Game::Game(Map* map, Hero* hero){
    m_map = map;
    m_hero = hero;
    printMenu();
}

void Game::printMenu(){
    while (m_map->getCurrentLocationIndex() < m_map->getLocations().size()-1) {
        m_map->printLocationInfo();
        std::cout << "What do you want to do?\n     1. Go to next location\n";
        char option;
        std::cin >> option;
        whatToDo(option);
    }
    std::cout << "You are now in final location.... Final boss is coming....." << std::endl;
    std::cout << "Oh wait a moment, we dont have fighting system, You died" << std::endl;
}

void Game::whatToDo(char option){
    if (option == '1'){
        m_map->printSideLocations();
    }
}