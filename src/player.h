#pragma once

#include <iostream>
#include <vector>
#include "deck.h"

class Player {
private:
    std::string name;

public:
    std::vector<Card>* hand;
    // Constructors
    Player();
    Player(std::string);

    // Setters
    void setName(std::string);

    // Getters
    std::string getName();

    // Functions
    void draw(Deck&);
};
