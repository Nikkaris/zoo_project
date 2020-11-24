//
// Created by nikol on 24.11.2020.
//

#ifndef MAIN_CPP_TILE_H
#define MAIN_CPP_TILE_H

#include <iostream>

class Tile {
public:
    Tile();
    virtual void printTile() = 0;
    virtual ~Tile();
};


#endif //MAIN_CPP_TILE_H
