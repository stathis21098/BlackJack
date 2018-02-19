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
    this->hand.push_back(deck.getCard(deck.getRemaining() - 1));
    deck.setRemaining(deck.getRemaining() - 1);
}

void Player::displayHand() {

    for(unsigned int i = 0; i < this->hand.size(); i++) {
        this->getCard(i).display();
    }
}

unsigned int Player::getHandPoints() {
    unsigned int sum = 0;

    for(unsigned int i = 0; i < hand.size(); i++) {
        sum += hand[i].getPoints();
    }

    return sum;
}
