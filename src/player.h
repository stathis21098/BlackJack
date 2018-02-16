#pragma once

#include <iostream>
#include "deck.h"

class Player {
private:
    std::string name;
public:
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
