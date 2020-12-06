//
// Created by dalib on 06.12.2020.
//

#include "TombLocationBuilder.h"

TombLocationBuilder::TombLocationBuilder(){
}

void TombLocationBuilder::createLocation(){
    m_location = new Location("Ancient Tomb");
    m_location->setLocationSize(4);
    std::vector<std::vector<Tile*>> tiles;

    std::vector<Tile*> row1, row2, row3, row4;
    row1.push_back(new TombTile());
    row1.push_back(new TombTile(new Enemy(2)));
    row1.push_back(new TombTile(new Chest(new Armor("armor", 5))));
    row1.push_back(new TombTile());

    row2.push_back(new TombTile(new Enemy(1)));
    row2.push_back(new TombTile());
    row2.push_back(new TombTile(new Enemy(2)));
    row2.push_back(new TombTile());

    row3.push_back(new TombTile());
    row3.push_back(new TombTile(new Chest(new Potion("small HP potion", 20))));
    row3.push_back(new TombTile());
    row3.push_back(new TombTile());

    row4.push_back(new TombTile(new Chest(new Weapon("Hammer", 69))));
    row4.push_back(new TombTile());
    row4.push_back(new TombTile());
    row4.push_back(new TombTile());

    tiles.push_back(row1);
    tiles.push_back(row2);
    tiles.push_back(row3);
    tiles.push_back(row4);
    m_location->setTiles(tiles);
}

void TombLocationBuilder::createSideLocations(){
    //north, east, south, west;
    m_location->setSideLocations({7, noDirection, 5, 3});
}