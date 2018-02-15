#include <iostream>
#include "src/player.h"
#include "src/deck.h"

int main() {

    Deck* x = new Deck();

    x->shuffle();
    x->display();

    return 0;
}
