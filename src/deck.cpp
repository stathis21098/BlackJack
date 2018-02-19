#include "deck.h"
#include <algorithm>
#include <ctime>

// Constructors
Deck::Deck() {
    this->fill();
}

// Setters
void Deck::setCard(const Card card, const int pos) {
    this->cards[pos] = card;
}

// Getters
Card Deck::getCard(const int pos) {
    return this->cards[pos];
}

// Functions
void Deck::fill() {
    // Clubs Init
    for(unsigned int i = 0; i < 13; i++) {
        Card* temp = new Card();

        temp->setSuit("Clubs");
        temp->setColor("Black");
        temp->setValue(i + 1);
        temp->setPoints(this->calcPoints(i + 1));

        this->cards.push_back(*temp);
        delete temp;
    }

    // Spades Init
    for(unsigned int i = 0; i < 13; i++) {
        Card* temp = new Card();

        temp->setSuit("Spades");
        temp->setColor("Black");
        temp->setValue(i + 1);
        temp->setPoints(this->calcPoints(i + 1));

        this->cards.push_back(*temp);
        delete temp;
    }

    // Diamonds Init
    for(unsigned int i = 0; i < 13; i++) {
        Card* temp = new Card();

        temp->setSuit("Diamonds");
        temp->setColor("Red");
        temp->setValue(i + 1);
        temp->setPoints(this->calcPoints(i + 1));

        this->cards.push_back(*temp);
        delete temp;
    }

    // Hearts Init
    for(unsigned int i = 0; i < 13; i++) {
        Card* temp = new Card();

        temp->setSuit("Hearts");
        temp->setColor("Red");
        temp->setValue(i + 1);
        temp->setPoints(this->calcPoints(i + 1));

        this->cards.push_back(*temp);
        delete temp;
    }
}

void Deck::shuffle() {
    srand(time(0));

    std::random_shuffle(&this->cards[0], &this->cards[52]);
}

unsigned int Deck::calcPoints(const int value) {
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

unsigned int Deck::size() {
    return cards.size();
}

void Deck::removeTopCard() {
    this->cards.pop_back();
}
