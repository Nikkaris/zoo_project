//
// Created by nikol on 24.11.2020.
//

#include "ForestTile.h"

ForestTile::ForestTile(): Tile(){
}

ForestTile::ForestTile(Enemy* enemy): Tile(enemy){
}

ForestTile::ForestTile(Chest* chest): Tile(chest){
}

ForestTile::ForestTile(FriendlyCharacter* friendlyCharacter): Tile(friendlyCharacter){
}

void ForestTile::printTile(bool printHero){
    std::cout << "/\\";
    Tile::printCharacter("/\\", printHero);
    std::cout << "/\\";
}