//
// Created by nikol on 19.11.2020.
//

#include "Game.h"

Game::Game(Map* map, Hero* hero){
    m_map = map;
    m_hero = hero;
    //playerCreation();
    printMenu();
}


void Game::playerCreation() {
    std::cout << std::endl;
    std::cout << "Come here you dumbo, lets play a game. You seems new here lets start with your stats." << std::endl;
    std::cout << "I will ask you a few questions, they are gonna have big impact on your playstyle. I meant on your life. Choose wisely!" << std::endl;
    std::cout << std::endl;
    std::cout << "How are you feeling?" << std::endl;
    std::cout << "1. I am feeling stronger like never before" << std::endl;
    std::cout << "2. I love running nothing is better than chasing some golbins around forest." << std::endl;
    std::cout << "3. I would say, that I love to speak to people all day long" << std::endl;


    /*

     char dialogOpton = getPlayerInput();

     if (dialogOption >= '1' && dialogOption <= '3') {
        if(dialogOption == '1') {
            std::cout << "You are the strong one, huh? I see that you muslces are nearly huge as mine!" << std::endl;
        } else if (dialogOption == '2') {
            std::cout << "You are the agile one, huh? I see that you are feeling confident. Still i would beat you in sprint!" << std::endl;
        } else {
            std::cout << "You are the charismatic one, huh? I see that you are very talkative, but please, stop talking... Really!" << std::endl;
        }
    } else {
        std::cout << "That is not an option. I do not care if you are feeling special today..." << std::endl;

    }*/
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
        whatToDo2();
        coor = m_map->getTileCoordinates();
    }
}

Game::~Game(){
    delete m_map;
    delete m_hero;
}