//
// Created by dalib on 06.12.2020.
//

#include "CavernLocationBuilder.h"

CavernLocationBuilder::CavernLocationBuilder(){
}

void CavernLocationBuilder::createLocation(){
    m_location = new Location("Bandit's Cavern");
    m_location->setLocationSize(3);

    std::vector<Tile*> row1, row2, row3;
    row1.push_back(new CavernTile());
    row1.push_back(new CavernTile());
    row1.push_back(new CavernTile());

    row2.push_back(new CavernTile());
    row2.push_back(new CavernTile());
    row2.push_back(new CavernTile());

    row3.push_back(new CavernTile());
    row3.push_back(new CavernTile());
    row3.push_back(new CavernTile());

    m_tiles.push_back(row1);
    m_tiles.push_back(row2);
    m_tiles.push_back(row3);
}

void CavernLocationBuilder::setEnemies(){
}

void CavernLocationBuilder::setChests(){
}

void CavernLocationBuilder::setFriendlyCharacters(){
}

void CavernLocationBuilder::createSideLocations(){
    //north, east, south, west;
    m_location->setSideLocations({6, noDirection, noDirection, 4});
}