//
// Created by dalib on 06.12.2020.
//

#include "BogLocationBuilder.h"

BogLocationBuilder::BogLocationBuilder(){
}

void BogLocationBuilder::createLocation(){
    m_location = new Location("Twisted Bog");
    m_location->setLocationSize(3);
    std::vector<std::vector<Tile*>> tiles;

    std::vector<Tile*> row1, row2, row3;
    row1.push_back(new BogTile());
    row1.push_back(new BogTile(new Chest(new Weapon("sword", 10))));
    row1.push_back(new BogTile());

    row2.push_back(new BogTile());
    row2.push_back(new BogTile());
    row2.push_back(new BogTile(new Enemy(1)));

    row3.push_back(new BogTile());
    row3.push_back(new BogTile(new Enemy(1)));
    row3.push_back(new BogTile());

    tiles.push_back(row1);
    tiles.push_back(row2);
    tiles.push_back(row3);
    m_location->setTiles(tiles);
}

void BogLocationBuilder::createSideLocations(){
    //north, east, south, west;
    m_location->setSideLocations({noDirection, noDirection, 4, 1});
}