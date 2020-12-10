//
// Created by nikol on 03.12.2020.
//

#include "HutTile.h"

HutTile::HutTile(): Tile(){
}

HutTile::HutTile(Enemy* enemy): Tile(enemy){
}

HutTile::HutTile(Chest* chest): Tile(chest){
}

HutTile::HutTile(FriendlyCharacter* friendlyCharacter): Tile(friendlyCharacter){
}

void HutTile::printTile(bool printHero){
    std::cout << "|_";
    Tile::printCharacter("__", printHero);
    std::cout << "_|";
}