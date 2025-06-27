# include "Game.h"
# include <iostream>
# include <cctype>
# include <set>

using namespace std;

Game :: Game()
{
    score = 0;
    moveNumber = 0;
    maxMoves = 6;
    hint = "";
}

void Game :: startGame(Player & player)
{
    Word word;

    word.initialize("Elephant", "Larget Terrestrial Mammal");
    moveNumber = 0;
    score = 0;

    cout << "\n Hint : " << word.getHint() << endl;

    while(!checkWin(word) && !checkLoss())
    {
        displayGameState(word, "");
        playRound(player, word);
    }

    if(checkWin(word))
    {
        string ans = word.getActualWord();
        cout << "\n Yay!! You Guessed The Word : " <<  word.getActualWord() << endl;
        player.updateScore(ans.length());
        player.incrementSolved();
    }

    else
    {
        cout << "\n You lost!! The word was : " << word.getActualWord() << endl;
    }

    player.updateHighScore();
    player.displayStats();
}

void Game :: playRound(Player &player, Word &word)
{
    char guess;
    cout << "\n Enter your Guess : ";
    cin >> guess;

    guess = toupper(guess);

    bool correct = word.revealLetter(guess);

    if(correct)
    {
        cout << "Yay ! Correct guess" << endl;
        score += 1;
    }

    else
    {
        cout << "Wrong Guess " << endl;
        moveNumber ++;
        cout << "Remanining attempts : " << maxMoves - moveNumber << endl;
    }
}

bool Game :: checkWin(const Word &word)
{
    return word.isComplete();
}

bool Game :: checkLoss()
{
    return moveNumber >= maxMoves;
}

void Game :: displayGameState(const Word& word, const string& guessedLetters)
{
    cout << "\n Word : " << word.getDisplayWord() << endl;
}