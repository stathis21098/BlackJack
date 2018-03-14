#include <cstdlib>
#include "game.h"

// Constructors
Game::Game() {
    // Set defaults
    this->diff = 2;
    this->turns = 0;

    this->player = new Player();
    this->player->setAi(false);

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

int Game::getTurns() {
    return this->turns;
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

void Game::setTurns(int turns) {
    this->turns = turns;
}

// Functions
bool Game::menu() {

    int choice;

    do {
        system("clear");

        std::cout << "Black Jack\n\n";

        std::cout << "[1] Play Game\n";
        std::cout << "[2] Set Difficulty (default: normal)\n";

        std::cout << "\n[0] Exit\n";
        std::cout << ">> ";

        std::cin >> choice;
    } while(choice != 0 && (choice < 1 || choice > 2));

    int diff_choice;
    std::string diff_str;

    switch(choice) {
    case 1:
        // play game
        this->game_init();
        break;
    case 2:
        // set difficulty

        do {
            system("clear");

            std::cout << "Black Jack\n\n";

            std::cout << "Select difficulty\n";
            std::cout << "1 - Easy\n"; // 50 - 50
            std::cout << "2 - Normal\n"; // Based on the whole deck
            std::cout << "3 - Medium\n"; // Keeps track of the drawn deck
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

void Game::game_init() {
    system("clear");

    // Call the Constructors
    Game();

    // Player gets a card
    this->getPlayer()->draw(*this->getDeck());
    std::cout << this->getPlayer()->getName() << " gets first card\nHand:\n";
    for(int i = this->getPlayer()->handSize() - 1; i >= 0; i--) {
      this->getPlayer()->getCard(i).display();
    } std::cout << std::endl;

    // Dealer gets a card
    this->getDealer()->draw(*this->getDeck());
    std::cout << this->getDealer()->getName() << " gets first card\nHand:\n";
    for(int i = this->getDealer()->handSize() - 1; i >= 0; i--) {
      this->getDealer()->getCard(i).display();
    } std::cout << std::endl;

    // Player gets a second card
    this->getPlayer()->draw(*this->getDeck());
    std::cout << this->getPlayer()->getName() << " gets second card\nHand:\n";
    for(int i = this->getPlayer()->handSize() - 1; i >= 0; i--) {
      this->getPlayer()->getCard(i).display();
    } std::cout << std::endl;

    // Dealer gets a second card
    this->getDealer()->draw(*this->getDeck());
    std::cout << this->getDealer()->getName() << " gets second card\nHand:\n";
    std::cout << "Card: *Faced Down*\n";
    for(int i = this->getDealer()->handSize() - 2; i >= 0; i--) {
      this->getDealer()->getCard(i).display();
    }
    std::cout << "\n*******************************\n\n";

    std::cout << this->getPlayer()->getName() << "'s turn\n";
    std::cout << this->getPlayer()->handPoints() << " points\n\n";
    for(int i = this->getPlayer()->handSize() - 1; i >= 0; i--) {
      this->getPlayer()->getCard(i).display();
    } std::cout << std::endl;

    char hit;

    do {
      if(this->getPlayer()->handPoints() < 21) {
        do {
          std::cout << "Hit(y/n): ";
          std::cin >> hit;
        } while(hit != 'y' && hit != 'n' && hit != 'Y' && hit != 'N');
        std::cout << std::endl;

        if(hit == 'y' || hit == 'Y') {
          // Player draw
          this->getPlayer()->draw(*this->getDeck());

          std::cout << this->getPlayer()->handPoints() << " points\n\n";

          std::cout << this->getPlayer()->getName() << " draw\nHand:\n";
          for(int i = this->getPlayer()->handSize() - 1; i >= 0; i--) {
            this->getPlayer()->getCard(i).display();
          } std::cout << std::endl;
        }

        if(this->getPlayer()->handPoints() == 21) {
          std::cout << "Black Jack!\n";
        } else if(this->getPlayer()->handPoints() > 21) {
          std::cout << "Busted!\n";
        }
      }
    } while(hit != 'n' && hit != 'N' && this->getPlayer()->handPoints() < 21);

    std::cin.ignore().get();
}
