//
// Created by dalib on 06.12.2020.
//

#include "NecroLocationBuilder.h"

NecroLocationBuilder::NecroLocationBuilder(){
}

void NecroLocationBuilder::createLocation(){
    m_location = new Location("Dead Man's End");
    m_location->setLocationSize(4);

    std::vector<Tile*> row1, row2, row3, row4;
    row1.push_back(new NecroTile());
    row1.push_back(new NecroTile());
    row1.push_back(new NecroTile());
    row1.push_back(new NecroTile());

    row2.push_back(new NecroTile());
    row2.push_back(new NecroTile());
    row2.push_back(new NecroTile());
    row2.push_back(new NecroTile());

    row3.push_back(new NecroTile());
    row3.push_back(new NecroTile());
    row3.push_back(new NecroTile());
    row3.push_back(new NecroTile());

    row4.push_back(new NecroTile());
    row4.push_back(new NecroTile());
    row4.push_back(new NecroTile());
    row4.push_back(new NecroTile());

    m_tiles.push_back(row1);
    m_tiles.push_back(row2);
    m_tiles.push_back(row3);
    m_tiles.push_back(row4);
}

void NecroLocationBuilder::setEnemies(){
}

void NecroLocationBuilder::setChests(){
}

void NecroLocationBuilder::setFriendlyCharacters(){
}

void NecroLocationBuilder::createSideLocations(){
    //north, east, south, west;
    m_location->setSideLocations({noDirection, noDirection, 6, noDirection});
}