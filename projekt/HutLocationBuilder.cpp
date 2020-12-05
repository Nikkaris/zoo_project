//
// Created by nikol on 03.12.2020.
//

#include "HutLocationBuilder.h"

HutTileBuilder::HutTileBuilder(){
}

void HutTileBuilder::createLocation(){
    m_location = new Location("The Old Mans Hut");
    m_location->setLocationSize(3);
    std::vector<std::vector<Tile*>> tiles;

    std::vector<Tile*> row1, row2, row3;
    row1.push_back(new HutTile());
    row1.push_back(new HutTile(new Chest(new Weapon("sword", 10))));
    row1.push_back(new HutTile());

    row2.push_back(new HutTile());
    row2.push_back(new HutTile());
    row2.push_back(new HutTile(new Enemy(1)));

    row3.push_back(new HutTile());
    row3.push_back(new HutTile(new Enemy(1)));
    row3.push_back(new HutTile());

    tiles.push_back(row1);
    tiles.push_back(row2);
    tiles.push_back(row3);
    m_location->setTiles(tiles);
}

void HutTileBuilder::createSideLocations(){
    //north, east, south, west;
    m_location->setSideLocations({noDirection, 1, noDirection, noDirection});
}