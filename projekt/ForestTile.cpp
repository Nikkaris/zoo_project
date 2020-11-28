//
// Created by nikol on 24.11.2020.
//

#include "ForestTile.h"

ForestTile::ForestTile(){

}

void ForestTile::printTile(){
    std::cout << "/\\";
    Tile::printCharacter("/\\");
    std::cout << "/\\";
}