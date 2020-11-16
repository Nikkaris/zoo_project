//
// Created by nikol on 16.11.2020.
//

#include "ForestTile.h"

ForestTile::ForestTile(int creatureLevel): Tile(creatureLevel){
}

void ForestTile::print() {
    std::cout << "/\\";
    Tile::printCreature("/\\");
    std::cout << "/\\";
}