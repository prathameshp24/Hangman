#include <iostream>
#include "Player.h"
#include "Game.h"

using namespace std;

int main() {
    cout << "🎮 Welcome to Hangman Game!" << endl;

    // Create a player
    Player player;
    string name;
    int id;

    cout << "Enter your player ID: ";
    cin >> id;
    cin.ignore(); // clear newline character
    cout << "Enter your name: ";
    getline(cin, name);

    player.setPlayer(id, name);

    // Start the game
    Game game;
    game.startGame(player);

    // Option to play again
    char playAgain;
    cout << "\nDo you want to play again? (Y/N): ";
    cin >> playAgain;

    while (toupper(playAgain) == 'Y') {
        game.startGame(player);
        cout << "\nDo you want to play again? (Y/N): ";
        cin >> playAgain;
    }

    cout << "\n👋 Thanks for playing, " << name << "! Goodbye!\n";

    return 0;
}
