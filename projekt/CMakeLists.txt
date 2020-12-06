cmake_minimum_required(VERSION 3.17)
project(projekt)

set(CMAKE_CXX_STANDARD 14)

add_executable(projekt main.cpp Location.cpp Location.h Map.cpp Map.h Hero.cpp Hero.h Game.cpp Game.h Tile.cpp Tile.h ForestTile.cpp ForestTile.h TownTile.cpp TownTile.h Enemy.cpp Enemy.h LocationBuilder.cpp LocationBuilder.h ForestLocationBuilder.cpp ForestLocationBuilder.h LocationDirector.cpp LocationDirector.h TownLocationBuilder.cpp TownLocationBuilder.h HutTile.cpp HutTile.h HutLocationBuilder.cpp HutLocationBuilder.h StoryTeller.cpp StoryTeller.h Item.cpp Item.h Weapon.cpp Weapon.h Chest.cpp Chest.h Armor.cpp Armor.h Potion.cpp Potion.h BogTile.cpp BogTile.h BogLocationBuilder.cpp BogLocationBuilder.h WoodsLocationBuilder.cpp WoodsLocationBuilder.h CavernTile.cpp CavernTile.h CavernLocationBuilder.cpp CavernLocationBuilder.h TombTile.cpp TombTile.h TombLocationBuilder.cpp TombLocationBuilder.h NecroTile.cpp NecroTile.h NecroLocationBuilder.cpp NecroLocationBuilder.h Inventory.cpp Inventory.h)