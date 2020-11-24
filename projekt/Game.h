//
// Created by nikol on 19.11.2020.
//

#ifndef PROJEKT_GAME_H
#define PROJEKT_GAME_H

#include "Map.h"
#include "Hero.h"

class Game {
    Map* m_map;
    Hero* m_hero;
public:
    Game(Map* map, Hero* hero);
    char getPlayerInput();
    void printMenu();
    void whatToDo();
    void whatToDo2();
    void locationPrintMenu();
    ~Game();
};


#endif //PROJEKT_GAME_H
