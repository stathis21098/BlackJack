#include <iostream>
#include "src/player.h"
#include "src/deck.h"

int main() {

    Deck* x = new Deck();
    Player* y = new Player("Stathis");

    std::cout << x->getRemaining() << std::endl;

    y->draw(*x);

    std::cout << x->getRemaining() << std::endl;

    return 0;
}
