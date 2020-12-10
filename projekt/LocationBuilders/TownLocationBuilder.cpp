//
// Created by nikol on 02.12.2020.
//

#include "TownLocationBuilder.h"

TownLocationBuilder::TownLocationBuilder(){
}

void TownLocationBuilder::createLocation(){
    m_location = new Location("Town");
    m_location->setLocationSize(3);

    std::vector<Tile*> row1, row2, row3;
    row1.push_back(new TownTile());
    row1.push_back(new TownTile());
    row1.push_back(new TownTile());

    row2.push_back(new TownTile());
    row2.push_back(new TownTile());
    row2.push_back(new TownTile());

    row3.push_back(new TownTile());
    row3.push_back(new TownTile());
    row3.push_back(new TownTile());

    m_tiles.push_back(row1);
    m_tiles.push_back(row2);
    m_tiles.push_back(row3);
}

void TownLocationBuilder::setEnemies(){
}

void TownLocationBuilder::setChests(){
}

void TownLocationBuilder::setFriendlyCharacters(){
}

void TownLocationBuilder::createSideLocations(){
    //north, east, south, west;
    m_location->setSideLocations({1, 4, noDirection, noDirection});
}