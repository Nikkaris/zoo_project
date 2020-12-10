//
// Created by nikol on 03.12.2020.
//

#include "HutLocationBuilder.h"

HutLocationBuilder::HutLocationBuilder(){
}

void HutLocationBuilder::createLocation(){
    m_location = new Location("The Old Man's Hut");
    m_location->setLocationSize(3);

    std::vector<Tile*> row1, row2, row3;
    row1.push_back(new HutTile());
    row1.push_back(new HutTile());
    row1.push_back(new HutTile());

    row2.push_back(new HutTile());
    row2.push_back(new HutTile());
    row2.push_back(new HutTile());

    row3.push_back(new HutTile());
    row3.push_back(new HutTile());
    row3.push_back(new ForestTile());

    m_tiles.push_back(row1);
    m_tiles.push_back(row2);
    m_tiles.push_back(row3);
}

void HutLocationBuilder::setEnemies(){
    m_tiles.at(1).at(2)->setEnemy(new Enemy(2));
    m_tiles.at(2).at(1)->setEnemy(new Enemy(1));
}

void HutLocationBuilder::setChests(){
    m_tiles.at(0).at(1)->setChest(new Chest(new Weapon("sword", 10)));
    m_tiles.at(0).at(2)->setChest(new Chest(new Weapon("shovel", 2)));
    m_tiles.at(1).at(0)->setChest(new Chest(new Armor("diamond armor", 50)));
}

void HutLocationBuilder::setFriendlyCharacters(){
    m_tiles.at(1).at(1)->setFrendlyCharacter(new FriendlyCharacter("Lucas", 5, 0, 3, 50));
}

void HutLocationBuilder::createSideLocations(){
    //north, east, south, west;
    m_location->setSideLocations({noDirection, 1, noDirection, noDirection});
}