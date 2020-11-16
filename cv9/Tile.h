//
// Created by nikol on 16.11.2020.
//

#ifndef CV9_TILE_H
#define CV9_TILE_H

#include <iostream>
#include "Creature.h"

class Tile {
protected:
    Creature* m_creature;
public:
    Tile(int creatureLevel);
    virtual void print() = 0;
    virtual ~Tile();
protected:
    void printCreature(std::string tileSymbol);
};


#endif //CV9_TILE_H
