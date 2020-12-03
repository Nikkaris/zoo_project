//
// Created by nikol on 24.11.2020.
//

#ifndef MAIN_CPP_TILE_H
#define MAIN_CPP_TILE_H

#include <iostream>
#include "Enemy.h"

class Tile {
protected:
    Enemy* m_enemy;
public:
    Tile();
    virtual void printTile(bool printHero) = 0;
    virtual ~Tile();
    void printCharacter(std::string tileSymbol, bool printHero);
    Enemy* getEnemy();
};


#endif //MAIN_CPP_TILE_H
