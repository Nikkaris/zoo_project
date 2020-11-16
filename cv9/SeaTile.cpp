//
// Created by nikol on 16.11.2020.
//

#include "SeaTile.h"

SeaTile::SeaTile(int creatureLevel): Tile(creatureLevel){
}

void SeaTile::print(){
    std::cout << "~~";
    Tile::printCreature("~~");
    std::cout << "~~";
}