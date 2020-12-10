//
// Created by nikol on 03.12.2020.
//

#ifndef MAIN_CPP_HUTTILE_H
#define MAIN_CPP_HUTTILE_H

#include "Tile.h"

class HutTile: public Tile {
public:
    HutTile();
    HutTile(Enemy* enemy);
    HutTile(Chest* chest);
    HutTile(FriendlyCharacter* friendlyCharacter);
    void printTile(bool printHero);
};

#endif //MAIN_CPP_HUTTILE_H
