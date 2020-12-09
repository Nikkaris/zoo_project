//
// Created by dalib on 06.12.2020.
//

#include "WoodsLocationBuilder.h"

WoodsLocationBuilder::WoodsLocationBuilder(){
}

void WoodsLocationBuilder::createLocation(){
    m_location = new Location("Hollow Woods");
    m_location->setLocationSize(4);

    std::vector<Tile*> row1, row2, row3, row4;
    row1.push_back(new ForestTile());
    row1.push_back(new ForestTile());
    row1.push_back(new ForestTile());
    row1.push_back(new ForestTile());

    row2.push_back(new ForestTile());
    row2.push_back(new ForestTile());
    row2.push_back(new ForestTile());
    row2.push_back(new ForestTile());

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

void WoodsLocationBuilder::setEnemies(){
}

void WoodsLocationBuilder::setChests(){
}

void WoodsLocationBuilder::setFriendlyCharacters(){
}

void WoodsLocationBuilder::createSideLocations(){
    //north, east, south, west;
    m_location->setSideLocations({3, 5, noDirection, 2});
}