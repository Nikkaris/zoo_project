//
// Created by dalib on 06.12.2020.
//

#include "NecroLocationBuilder.h"

NecroLocationBuilder::NecroLocationBuilder(){
}

void NecroLocationBuilder::createLocation(){
    m_location = new Location("Dead Man's End");
    m_location->setLocationSize(4);
    std::vector<std::vector<Tile*>> tiles;

    std::vector<Tile*> row1, row2, row3, row4;
    row1.push_back(new NecroTile());
    row1.push_back(new NecroTile(new Enemy(2)));
    row1.push_back(new NecroTile(new Chest(new Armor("armor", 5))));
    row1.push_back(new NecroTile());

    row2.push_back(new NecroTile(new Enemy(1)));
    row2.push_back(new NecroTile());
    row2.push_back(new NecroTile(new Enemy(2)));
    row2.push_back(new NecroTile());

    row3.push_back(new NecroTile());
    row3.push_back(new NecroTile(new Chest(new Potion("small HP potion", 20))));
    row3.push_back(new NecroTile());
    row3.push_back(new NecroTile());

    row4.push_back(new NecroTile(new Chest(new Weapon("Hammer", 69))));
    row4.push_back(new NecroTile());
    row4.push_back(new NecroTile());
    row4.push_back(new NecroTile());

    tiles.push_back(row1);
    tiles.push_back(row2);
    tiles.push_back(row3);
    tiles.push_back(row4);
    m_location->setTiles(tiles);
}

void NecroLocationBuilder::createSideLocations(){
    //north, east, south, west;
    m_location->setSideLocations({noDirection, noDirection, 6, noDirection});
}