//
// Created by nikol on 16.11.2020.
//

#ifndef CV9_MAP_H
#define CV9_MAP_H

#include <vector>
#include "ForestTile.h"
#include "SeaTile.h"

class Map {
    std::vector<std::vector<Tile*>> m_tiles;
public:
    Map(int size);
    void print();
private:
    void createSmallMap();
};


#endif //CV9_MAP_H
