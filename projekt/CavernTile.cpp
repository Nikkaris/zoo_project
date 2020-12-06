//
// Created by dalib on 06.12.2020.
//

#include "CavernTile.h"

CavernTile::CavernTile(): Tile(){
}

CavernTile::CavernTile(Enemy* enemy): Tile(enemy){
}

CavernTile::CavernTile(Chest* chest): Tile(chest){
}

void CavernTile::printTile(bool printHero){
    std::cout << "^^";
    Tile::printCharacter("__", printHero);
    std::cout << "^^";
}