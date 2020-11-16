#include <iostream>
#include <vector>
#include "ForestTile.h"
#include "SeaTile.h"
#include "Map.h"

int main() {
    /*
    std::vector<Tile*> tiles;

    tiles.push_back(new SeaTile(9));
    tiles.push_back(new ForestTile(8));
    tiles.push_back(new ForestTile(0));

    for (auto tile:tiles){
        tile->print();
        std::cout << " ";
    }
    */

    Map* myMap = new Map(1);
    myMap->print();

    delete myMap;
    return 0;
}
