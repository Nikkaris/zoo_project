//
// Created by dalib on 06.12.2020.
//

#include "BogTile.h"

BogTile::BogTile(): Tile(){
}

BogTile::BogTile(Enemy* enemy): Tile(enemy){
}

BogTile::BogTile(Chest* chest): Tile(chest){
}

void BogTile::printTile(bool printHero){
    std::cout << "_;";
    Tile::printCharacter("._", printHero);
    std::cout << ".~";
}