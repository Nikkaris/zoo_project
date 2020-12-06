//
// Created by dalib on 06.12.2020.
//

#ifndef MAIN_CPP_TOMBTILE_H
#define MAIN_CPP_TOMBTILE_H

#include "Tile.h"

class TombTile: public Tile {
public:
    TombTile();
    TombTile(Enemy* enemy);
    TombTile(Chest* chest);
    void printTile(bool printHero);
};


#endif //MAIN_CPP_TOMBTILE_H
