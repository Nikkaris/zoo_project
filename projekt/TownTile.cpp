//
// Created by nikol on 24.11.2020.
//

#include "TownTile.h"

TownTile::TownTile(){

}

void TownTile::printTile(bool hero){
    std::cout << "__";
    Tile::printCharacter("__", hero);
    std::cout << "__";
}