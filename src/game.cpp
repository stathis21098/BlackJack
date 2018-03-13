#include <cstdlib>
#include "game.h"

// Constructors
Game::Game() {
    // Set defaults
    this->diff = 2;

    this->player = new Player();
    this->dealer = new Player("Dealer");

    this->deck = new Deck();
    deck->shuffle();
}

// De-Constructors
Game::~Game() {
    delete this->player;
    delete this->dealer;
    delete this->deck;
}

// Getters
int Game::getDiff() {
    return this->diff;
}

Player* Game::getPlayer() {
    return this->player;
}

Player* Game::getDealer() {
    return this->dealer;
}

Deck* Game::getDeck() {
    return this->deck;
}

// Setters
void Game::setDiff(int diff) {
    this->diff = diff;
}

void Game::setPlayer(Player* player) {
    this->player = player;
}

void Game::setDealer(Player* dealer) {
    this->dealer = dealer;
}

void Game::setDeck(Deck* deck) {
    this->deck = deck;
}

// Functions
bool Game::menu() {

    int choice;

    do {
        system("clear");

        std::cout << "Black Jack\n\n";

        std::cout << "[1] Play Game\n";
        std::cout << "\n[0] Exit\n";
        std::cout << ">> ";

        std::cin >> choice;
    } while(choice != 0 && (choice < 1 || choice > 1));

    int diff_choice;
    std::string diff_str;

    switch(choice) {
    case 1:
        // Play Game

        do {
            system("clear");

            std::cout << "Black Jack\n\n";

            std::cout << "Select diffiulty\n";
            std::cout << "1 - Easy\n";      // 50 - 50
            std::cout << "2 - Normal\n";    // Based on the whole deck
            std::cout << "3 - Medium\n";      // Keeps track of the drawn deck
            std::cout << "4 - Hard\n"; // Cheats (looks if he loses)
            std::cout << "\n>> ";

            std::cin >> diff_choice;

        } while(diff_choice < 1 || diff_choice > 4);
        this->setDiff(diff_choice);


        switch(diff_choice) {
        case 1:
            diff_str = "Easy";
            break;
        case 2:
            diff_str = "Normal";
            break;
        case 3:
            diff_str = "Medium";
            break;
        case 4:
            diff_str = "Hard";
            break;
        default:
            std::cout << "Not a possible choice\n";
            diff_str = "Error";
            break;
        }

        std::cout << "\nDifficulty set to " << diff_str << std::endl;
        std::cin.ignore().get();

        break;
    case 0:
        // Exit
        system("clear");
        std::cout << "Thanks for playing!\n";
        return false;
    default:
        std::cout << "Error, not a possible choice.\n";
        break;
    }

    return true;
}
