//
// Created by nikol on 24.11.2020.
//

#ifndef MAIN_CPP_TILE_H
#define MAIN_CPP_TILE_H

#include <iostream>
#include "Enemy.h"
#include "FriendlyCharacter.h"
#include "Chest.h"

class Tile {
protected:
    Enemy* m_enemy;
    Chest* m_chest;
    FriendlyCharacter* m_friendlyCharacter;
public:
    Tile();
    Tile(Enemy* enemy);
    Tile(Chest* chest);
    Tile(FriendlyCharacter* friendlyCharacter);
    virtual void printTile(bool printHero) = 0;
    virtual ~Tile();
    void printCharacter(std::string tileSymbol, bool printHero);
    void setEnemy(Enemy* enemy);
    void setChest(Chest* chest);
    void setFrendlyCharacter(FriendlyCharacter* friendlyCharacter);
    Enemy* getEnemy();
    Chest* getChest();
    FriendlyCharacter* getFriendlyCharacter();
    void removeChest();
};


#endif //MAIN_CPP_TILE_H
