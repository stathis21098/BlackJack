#include <iostream>
#include "src/game.h"

int main() {
    Game* game = new Game();

    while(game->getDeck()->size() > 0) {
        std::cout << game->getDeck()->size() << std::endl;
        game->getPlayer()->draw(*game->getDeck());
    }

    delete game;

    return 0;
}
