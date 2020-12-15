//
// Created by nikol on 15.12.2020.
//

#include "WaterTile.h"

void WaterTile::printTile(bool printHero){
    std::cout << "~~";
    Tile::printCharacter("~~", printHero);
    std::cout << "~~";
}