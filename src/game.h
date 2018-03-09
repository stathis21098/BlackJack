#pragma once

#include "player.h"
#include "deck.h"

class Game {
private:
    int diff;
    Player* player, *dealer;
    Deck* deck;
public:
    // Constructors
    Game();

    // De-Constructors
    ~Game();

    // Getters
    int getDiff();
    Player* getPlayer();
    Player* getDealer();
    Deck* getDeck();

    // Setters
    void setDiff(int);
    void setPlayer(Player*);
    void setDealer(Player*);
    void setDeck(Deck*);

    // Functions
    bool menu();
};
