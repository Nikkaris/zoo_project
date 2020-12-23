//
// Created by nikol on 19.11.2020.
//

#ifndef PROJEKT_GAME_H
#define PROJEKT_GAME_H

#include "Map.h"
#include "Hero.h"
#include "StoryTeller.h"
#include "Interactions/StealCoins.h"
#include "Interactions/Buy.h"
#include "Interactions/Sell.h"

class Game {
    Map* m_map;
    Hero* m_hero;
    StoryTeller* m_story;
public:
    Game();
    void startGame();
    void printMainMenu();
    void printStart();
    void printMapMenu();
    void PrintLocationMenu();
    void whatToDoMap();
    void whatToDoLocation();
    char getPlayerInput();
    ~Game();
};


#endif //PROJEKT_GAME_H
