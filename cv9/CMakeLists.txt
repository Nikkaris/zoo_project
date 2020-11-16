cmake_minimum_required(VERSION 3.17)
project(cv9)

set(CMAKE_CXX_STANDARD 14)

add_executable(cv9 main.cpp Tile.cpp Tile.h ForestTile.cpp ForestTile.h Creature.cpp Creature.h SeaTile.cpp SeaTile.h Map.cpp Map.h)