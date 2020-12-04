//
// Created by nikol on 24.11.2020.
//

#include "TownTile.h"

TownTile::TownTile(): Tile(){
}

TownTile::TownTile(Enemy* enemy): Tile(enemy){
}

TownTile::TownTile(Chest* chest): Tile(chest){
}

void TownTile::printTile(bool printHero){
    std::cout << "__";
    Tile::printCharacter("__", printHero);
    std::cout << "__";
}