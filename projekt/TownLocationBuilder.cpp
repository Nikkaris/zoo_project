//
// Created by nikol on 02.12.2020.
//

#include "TownLocationBuilder.h"

TownLocationBuilder::TownLocationBuilder(){
}

void TownLocationBuilder::createLocation(){
    m_location = new Location("Town");
    std::vector<std::vector<Tile*>> tiles;

    std::vector<Tile*> row1, row2, row3;
    row1.push_back(new TownTile());
    row1.push_back(new TownTile());
    row1.push_back(new TownTile(new Enemy(3)));

    row2.push_back(new TownTile());
    row2.push_back(new TownTile(new Enemy(4)));
    row2.push_back(new TownTile(new Enemy(5)));

    row3.push_back(new TownTile());
    row3.push_back(new TownTile(new Enemy(5)));
    row3.push_back(new TownTile());

    tiles.push_back(row1);
    tiles.push_back(row2);
    tiles.push_back(row3);
    m_location->setTiles(tiles);
}

void TownLocationBuilder::createSideLocations(){
    //north, east, south, west;
    m_location->setSideLocations({noDirection, noDirection, noDirection, 1});
}