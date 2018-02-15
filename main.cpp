#include <iostream>
#include "src/player.h"
#include "src/deck.h"

int main() {

    Deck* x = new Deck();

    x->getCard(12).display();

    return 0;
}
