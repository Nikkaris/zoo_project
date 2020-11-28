//
// Created by nikol on 24.11.2020.
//

#include "TownTile.h"

TownTile::TownTile(){

}

void TownTile::printTile(){
    std::cout << "__";
    Tile::printCharacter("/\\");
    std::cout << "__";
}