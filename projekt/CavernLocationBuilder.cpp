//
// Created by dalib on 06.12.2020.
//

#include "CavernLocationBuilder.h"

CavernLocationBuilder::CavernLocationBuilder(){
}

void CavernLocationBuilder::createLocation(){
    m_location = new Location("Bandit's Cavern");
    m_location->setLocationSize(3);
    std::vector<std::vector<Tile*>> tiles;

    std::vector<Tile*> row1, row2, row3;
    row1.push_back(new CavernTile());
    row1.push_back(new CavernTile(new Chest(new Weapon("sword", 10))));
    row1.push_back(new CavernTile());

    row2.push_back(new CavernTile());
    row2.push_back(new CavernTile());
    row2.push_back(new CavernTile(new Enemy(1)));

    row3.push_back(new CavernTile());
    row3.push_back(new CavernTile(new Enemy(1)));
    row3.push_back(new CavernTile());

    tiles.push_back(row1);
    tiles.push_back(row2);
    tiles.push_back(row3);
    m_location->setTiles(tiles);
}

void CavernLocationBuilder::createSideLocations(){
    //north, east, south, west;
    m_location->setSideLocations({6, noDirection, noDirection, 4});
}