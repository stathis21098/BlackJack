#include "player.h"
#include "deck.h"

// Constructors
Player::Player() {
    this->name = "Player";
}

Player::Player(const std::string name) {
    this->name = name;
}

// Setters
void Player::setName(const std::string name) {
    this->name = name;
}

// Getters
std::string Player::getName() {
    return this->name;
}

Card Player::getCard(const int pos) {
    return this->hand[pos];
}

// Functions
void Player::draw(Deck &deck) {
    this->hand.push_back(deck.getCard(deck.size() - 1));
    deck.removeTopCard();
}

void Player::displayHand() {

    for(unsigned int i = 0; i < this->hand.size(); i++) {
        this->getCard(i).display();
    }
}

unsigned int Player::handPoints() {
    unsigned int sum = 0;
    bool found = false;

    for(unsigned int i = 0; i < hand.size(); i++) {
        unsigned int points = hand[i].getPoints();

        sum += points;

        if(points == 11) {
            found = true;
        }

        if(found && points + sum > 21) {
            sum -= 10;
            found = false;
        }
    }

    return sum;
}

unsigned int Player::handSize() {
    return this->hand.size();
}
