#include <iostream>
#include "src/game.h"

int main() {
    Game* game = new Game();

    while(game->menu());

    delete game;

    return 0;
}
