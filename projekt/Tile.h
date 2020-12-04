//
// Created by nikol on 24.11.2020.
//

#ifndef MAIN_CPP_TILE_H
#define MAIN_CPP_TILE_H

#include <iostream>
#include "Enemy.h"
#include "Chest.h"

class Tile {
protected:
    Enemy* m_enemy;
    Chest* m_chest;
public:
    Tile();
    Tile(Enemy* enemy);
    Tile(Chest* chest);
    virtual void printTile(bool printHero) = 0;
    virtual ~Tile();
    void printCharacter(std::string tileSymbol, bool printHero);
    Enemy* getEnemy();
    Chest* getChest();
};


#endif //MAIN_CPP_TILE_H
