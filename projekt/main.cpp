#include <iostream>
#include "Game.h"

int main() {
    Game* game = new Game(new Map(), new Hero("Nikolas"));

    delete game;
    return 0;
}
