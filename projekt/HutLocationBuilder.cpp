//
// Created by nikol on 03.12.2020.
//

#include "HutLocationBuilder.h"

HutLocationBuilder::HutLocationBuilder(){
}

void HutLocationBuilder::createLocation(){
    m_location = new Location("The Old Man's Hut");
    m_location->setLocationSize(3);
    std::vector<std::vector<Tile*>> tiles;

    std::vector<Tile*> row1, row2, row3;
    row1.push_back(new HutTile());
    row1.push_back(new HutTile(new Chest(new Weapon("sword", 10))));
    row1.push_back(new HutTile(new Chest(new Weapon("shovel", 1))));

    row2.push_back(new HutTile(new Chest(new Armor("diamong armor", 80))));
    row2.push_back(new HutTile(new FriendlyCharacter("Bohdan", 5, 0, 3, 100)));
    row2.push_back(new HutTile(new Enemy(1)));

    row3.push_back(new HutTile());
    row3.push_back(new HutTile(new Enemy(1)));
    row3.push_back(new HutTile());

    tiles.push_back(row1);
    tiles.push_back(row2);
    tiles.push_back(row3);
    m_location->setTiles(tiles);
}

void HutLocationBuilder::createSideLocations(){
    //north, east, south, west;
    m_location->setSideLocations({noDirection, 1, noDirection, noDirection});
}