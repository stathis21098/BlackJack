#include "player.h"

Player::Player() {
    this->name = "Player";
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
