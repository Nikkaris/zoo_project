//
// Created by dalib on 06.12.2020.
//

#include "TombTile.h"

TombTile::TombTile(): Tile(){
}

TombTile::TombTile(Enemy* enemy): Tile(enemy){
}

TombTile::TombTile(Chest* chest): Tile(chest){
}

TombTile::TombTile(FriendlyCharacter* friendlyCharacter): Tile(friendlyCharacter){
}

void TombTile::printTile(bool printHero){
    std::cout << "^^";
    Tile::printCharacter("__", printHero);
    std::cout << "^^";
}