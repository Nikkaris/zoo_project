//
// Created by dalib on 06.12.2020.
//

#include "TombLocationBuilder.h"

TombLocationBuilder::TombLocationBuilder(){
}

void TombLocationBuilder::createLocation(){
    m_location = new Location("Ancient Tomb");
    m_location->setLocationSize(4);

    std::vector<Tile*> row1, row2, row3, row4;
    row1.push_back(new TombTile());
    row1.push_back(new TombTile());
    row1.push_back(new TombTile());
    row1.push_back(new TombTile());

    row2.push_back(new TombTile());
    row2.push_back(new TombTile());
    row2.push_back(new TombTile());
    row2.push_back(new TombTile());

    row3.push_back(new TombTile());
    row3.push_back(new TombTile());
    row3.push_back(new TombTile());
    row3.push_back(new TombTile());

    row4.push_back(new TombTile());
    row4.push_back(new TombTile());
    row4.push_back(new TombTile());
    row4.push_back(new TombTile());

    m_tiles.push_back(row1);
    m_tiles.push_back(row2);
    m_tiles.push_back(row3);
    m_tiles.push_back(row4);
}

void TombLocationBuilder::setEnemies(){
}

void TombLocationBuilder::setChests(){
}

void TombLocationBuilder::setFriendlyCharacters(){
}

void TombLocationBuilder::createSideLocations(){
    //north, east, south, west;
    m_location->setSideLocations({7, noDirection, 5, 3});
}