# pragma once

# include <string>
# include "Player.h"
# include "Word.h"

using namespace std;

class Game
{
    private :
        int score;
        int moveNumber;
        int maxMoves;
        string hint;

    public :
        Game();


        void startGame(Player & player);
        void playRound(Player & player, Word & word);
        bool checkWin(const Word& word);
        bool checkLoss();
        void displayGameState(const Word& word, const string& guessedLetters);

};