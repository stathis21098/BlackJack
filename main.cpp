#include <iostream>
#include "src/player.h"
#include "src/deck.h"

int main() {

    Deck* x = new Deck();

    x->shuffle();
    x->getCard(0).display();

    x->getCard(51).display();

    return 0;
}
