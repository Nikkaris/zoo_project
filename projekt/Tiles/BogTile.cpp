//
// Created by dalib on 06.12.2020.
//

#include "BogTile.h"

void BogTile::printTile(bool printHero){
    std::cout << "_;";
    Tile::printCharacter("._", printHero);
    std::cout << ".~";
}