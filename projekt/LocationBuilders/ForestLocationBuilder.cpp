//
// Created by nikol on 02.12.2020.
//

#include "ForestLocationBuilder.h"

ForestLocationBuilder::ForestLocationBuilder(){
}

void ForestLocationBuilder::createLocation(){
    m_location = new Location("Whispering Forest");
    m_location->setLocationSize(4);

    std::vector<Tile*> row1, row2, row3, row4;
    row1.push_back(new ForestTile());
    row1.push_back(new ForestTile());
    row1.push_back(new WaterTile());
    row1.push_back(new WaterTile());

    row2.push_back(new ForestTile());
    row2.push_back(new ForestTile());
    row2.push_back(new ForestTile());
    row2.push_back(new WaterTile());

    row3.push_back(new ForestTile());
    row3.push_back(new ForestTile());
    row3.push_back(new ForestTile());
    row3.push_back(new ForestTile());

    row4.push_back(new ForestTile());
    row4.push_back(new ForestTile());
    row4.push_back(new ForestTile());
    row4.push_back(new ForestTile());

    m_tiles.push_back(row1);
    m_tiles.push_back(row2);
    m_tiles.push_back(row3);
    m_tiles.push_back(row4);
}

void ForestLocationBuilder::setEnemies(){
    m_tiles.at(1).at(2)->setEnemy(new Enemy(5));
    m_tiles.at(2).at(1)->setEnemy(new Enemy(3));
}

void ForestLocationBuilder::setChests(){
    m_tiles.at(0).at(1)->setChest(new Chest(new Weapon("Hammer", 30, 18)));
    m_tiles.at(1).at(0)->setChest(new Chest(new Armor("wooden armor", 10, 13)));
}

void ForestLocationBuilder::setFriendlyCharacters(){
}

void ForestLocationBuilder::createSideLocations(){
    //north, east, south, west;
    m_location->setSideLocations({noDirection, 3, 2, 0});
}