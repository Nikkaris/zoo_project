//
// Created by dalib on 06.12.2020.
//

#include "TombTile.h"

TombTile::TombTile(): Tile(tileType::accessible){
}

void TombTile::printTile(bool printHero){
    std::cout << "^^";
    Tile::printCharacter("__", printHero);
    std::cout << "^^";
}