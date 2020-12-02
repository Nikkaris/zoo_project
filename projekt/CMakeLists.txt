cmake_minimum_required(VERSION 3.17)
project(projekt)

set(CMAKE_CXX_STANDARD 14)

add_executable(projekt main.cpp Location.cpp Location.h Map.cpp Map.h Hero.cpp Hero.h Game.cpp Game.h Tile.cpp Tile.h ForestTile.cpp ForestTile.h TownTile.cpp TownTile.h Enemy.cpp Enemy.h LocationBuilder.cpp LocationBuilder.h ForestLocationBuilder.cpp ForestLocationBuilder.h LocationDirector.cpp LocationDirector.h TownLocationBuilder.cpp TownLocationBuilder.h)