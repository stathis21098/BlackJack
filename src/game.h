#pragma once

#include "player.h"

class Game {
private:
    int diff;
    Player player, dealer;
public:
    // Getters
    int getDiff();
    Player getPlayer();
    Player getDealer();

    // Setters
    void setDiff(int);
    void setPlayer(Player);
    void setDealer(Player);
};
