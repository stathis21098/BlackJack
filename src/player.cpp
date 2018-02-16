#include "player.h"
#include "deck.h"

// Constructors
Player::Player() {
    this->name = "Player";
    this->hand = new std::vector<Card>;
}

Player::Player(std::string name) {
    this->name = name;
}

// Setters
void Player::setName(std::string name) {
    this->name = name;
}

// Getters
std::string Player::getName() {
    return this->name;
}

// Functions
void Player::draw(Deck &deck) {
    deck.setRemaining(deck.getRemaining() - 1);
}
