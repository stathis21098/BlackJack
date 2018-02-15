#include "deck.h"
#include <algorithm>

// Constructors
Deck::Deck() {
    this->cards = new Card[52]();
    this->count = 0;
    this->fill();
}

// Deconstructors
Deck::~Deck() {
    delete(this->cards);
}

// Setters
void Deck::setCount(int count) {
    this->count = count;
}

void Deck::setCard(Card card, int pos) {
    this->cards[pos] = card;
}

// Getters
int Deck::getCount() {
    return this->count;
}

Card Deck::getCard(int pos) {
    return this->cards[pos];
}

// Functions
void Deck::fill() {
    // Clubs Init
    for(int i = 0; i < 13; i++) {
        this->cards[this->count].setSuit("Clubs");
        this->cards[this->count].setColor("Black");
        this->cards[this->count].setValue(i + 1);
        this->cards[this->count].setPoints(this->calcPoints(i + 1));

        this->count++;
    }

    // Spades Init
    for(int i = 0; i < 13; i++) {
        this->cards[this->count].setSuit("Spades");
        this->cards[this->count].setColor("Black");
        this->cards[this->count].setValue(i + 1);
        this->cards[this->count].setPoints(this->calcPoints(i + 1));

        this->count++;
    }

    // Diamonds Init
    for(int i = 0; i < 13; i++) {
        this->cards[this->count].setSuit("Diamonds");
        this->cards[this->count].setColor("Red");
        this->cards[this->count].setValue(i + 1);
        this->cards[this->count].setPoints(this->calcPoints(i + 1));

        this->count++;
    }

    // Hearts Init
    for(int i = 0; i < 13; i++) {
        this->cards[this->count].setSuit("Hearts");
        this->cards[this->count].setColor("Red");
        this->cards[this->count].setValue(i + 1);
        this->cards[this->count].setPoints(this->calcPoints(i + 1));

        this->count++;
    }
}

void Deck::shuffle() {
    std::random_shuffle(&cards[0], &cards[51]);
}

int Deck::calcPoints(int value) {
    int points = 10;

    if(value == 1) {
        points = 11;
    } else if(value < 10) {
        points = value;
    }

    return points;
}

void Deck::display() {
    for(int i = 0; i < 52; i++) {
        this->cards[i].display();
    }
}
