//
// Created by nikol on 03.12.2020.
//

#include "HutTile.h"

HutTile::HutTile(Enemy* enemy){
    m_enemy = enemy;
}

HutTile::HutTile(){
}

void HutTile::printTile(bool printHero){
    std::cout << "|_";
    Tile::printCharacter("__", printHero);
    std::cout << "_|";
}