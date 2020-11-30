//
// Created by nikol on 24.11.2020.
//

#ifndef MAIN_CPP_TILE_H
#define MAIN_CPP_TILE_H

#include <iostream>
#include "Enemy.h"

class Tile {
    Enemy* m_enemy;
public:
    Tile();
    virtual void printTile(bool hero) = 0;
    virtual ~Tile();
    void printCharacter(std::string tileSymbol, bool hero);
    void setEnemy(Enemy* enemy);
    Enemy* getEnemy();
};


#endif //MAIN_CPP_TILE_H
