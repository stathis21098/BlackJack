#pragma once

#include "card.h"

class Deck {
private:
    Card* cards;
    int count;
    int remaining;
public:
    // Constructors
    Deck();

    // De-constructors
    ~Deck();

    // Setters
    void setCount(int);
    void setCard(Card, int);
    void setRemaining(int);

    // Getters
    int getCount();
    Card getCard(int);
    int getRemaining();

    // Functions
    void fill();
    void shuffle();

    int calcPoints(int);
    void display();

};
