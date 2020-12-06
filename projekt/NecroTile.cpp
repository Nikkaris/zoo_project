//
// Created by dalib on 06.12.2020.
//

#include "NecroTile.h"

NecroTile::NecroTile(): Tile(){
}

NecroTile::NecroTile(Enemy* enemy): Tile(enemy){
}

NecroTile::NecroTile(Chest* chest): Tile(chest){
}

void NecroTile::printTile(bool printHero){
    std::cout << "^^";
    Tile::printCharacter("__", printHero);
    std::cout << "^^";
}