#include <iostream>
#include "Game.h"

int main() {
    Game* game = new Game(new Map(), new Hero(), new StoryTeller());

    delete game;
    return 0;
}
