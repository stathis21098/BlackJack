#include <iostream>
#include "src/player.h"
#include "src/deck.h"

int main() {

    Deck* deck = new Deck();

    Player* player = new Player();

    deck->shuffle();

    player->draw(*deck);
    player->draw(*deck);
    player->draw(*deck);
    player->draw(*deck);

    std::cout << player->getHandPoints() << std::endl;

    delete player;

    delete deck;

    return 0;
}
