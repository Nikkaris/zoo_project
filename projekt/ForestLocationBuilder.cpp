//
// Created by nikol on 02.12.2020.
//

#include "ForestLocationBuilder.h"

ForestLocationBuilder::ForestLocationBuilder(){
}

void ForestLocationBuilder::createLocation(){
    m_location = new Location("Whispering Woods");
    std::vector<std::vector<Tile*>> tiles;

    std::vector<Tile*> row1, row2, row3;
    row1.push_back(new ForestTile());
    row1.push_back(new ForestTile(new Enemy(2)));
    row1.push_back(new ForestTile());

    row2.push_back(new ForestTile(new Enemy(1)));
    row2.push_back(new ForestTile());
    row2.push_back(new ForestTile(new Enemy(2)));

    row3.push_back(new ForestTile());
    row3.push_back(new ForestTile());
    row3.push_back(new ForestTile());

    tiles.push_back(row1);
    tiles.push_back(row2);
    tiles.push_back(row3);
    m_location->setTiles(tiles);
}

void ForestLocationBuilder::createSideLocations(){
    //north, east, south, west;
    m_location->setSideLocations({noDirection, 2, noDirection, 0});
}