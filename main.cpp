#include <iostream>
#include "src/player.h"
#include "src/deck.h"

int main() {
    Player* y = new Player("Stathis");

    std::cout << sizeof(&y->hand) << std::endl;
    return 0;
}
