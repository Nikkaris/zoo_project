//
// Created by nikol on 19.11.2020.
//

#ifndef PROJEKT_GAME_H
#define PROJEKT_GAME_H

#include "Map.h"
#include "Hero.h"
#include "StoryTeller.h"

class Game {
    Map* m_map;
    Hero* m_hero;
    StoryTeller* m_story;
    static int m_difficulty;
public:
    Game();
    void startGame();
    void chooseDifficulty();
    void setupGame();
    void printStart();
    void mapControl();
    void PrintLocationMenu();
    void whatToDoLocation();
    char getPlayerInput();
    static int getDifficulty();
    ~Game();
};


#endif //PROJEKT_GAME_H
