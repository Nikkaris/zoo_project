#include <iostream>
#include "Game.h"

int main() {
    Game* game = new Game(new Map(), new Hero("Najkolas"));

    delete game;
    return 0;
}
