#include "game.h"

// Getters
int Game::getDiff() {
    return this->diff;
}

Player Game::getPlayer() {
    return this->player;
}

Player Game::getDealer() {
    return this->dealer;
}

// Setters
void Game::setDiff(int diff) {
    this->diff = diff;
}

void Game::setPlayer(Player player) {
    this->player = player;
}

void Game::setDealer(Player dealer) {
    this->dealer = dealer;
}
