//
// Created by nikol on 19.11.2020.
//

#ifndef PROJEKT_GAME_H
#define PROJEKT_GAME_H

#include "Map.h"
#include "Hero.h"
#include "StoryTeller.h"
#include "Interactions/StealCoins.h"
#include "Interactions/Trade.h"

class Game {
    Map* m_map;
    Hero* m_hero;
    StoryTeller* m_story;
public:
    Game(Map* map, Hero* hero, StoryTeller* story);
    char getPlayerInput();
    void printMenu();
    void whatToDo();
    void locationPrintMenu();
    void whatToDo2();
    void printProlog();
    ~Game();
};


#endif //PROJEKT_GAME_H
