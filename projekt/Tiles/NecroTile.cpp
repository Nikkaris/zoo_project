//
// Created by dalib on 06.12.2020.
//

#include "NecroTile.h"

void NecroTile::printTile(bool printHero){
    std::cout << "^^";
    Tile::printCharacter("__", printHero);
    std::cout << "^^";
}