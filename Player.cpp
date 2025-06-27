# include <iostream>
# include "Player.h"

Player :: Player()
{
    playerId = 0;
    playerName = "";
    score = 0;
    highScore = 0;
    puzzlesSolved = 0;
}

void Player :: updateScore(int points)
{
    score += points;
    updateHighScore();
}

void Player :: updateHighScore()
{
    if(score > highScore)
    {
        highScore = score;
    }
}

void Player :: incrementSolved()
{
    puzzlesSolved ++;
}

void Player :: displayStats()
{
    cout << "Displaying stats for player id : " << playerId << " , player name : " << playerName << endl;

    cout << "High Score : "<< highScore << endl;
    cout << "Number of puzzles solved : " << puzzlesSolved << endl;
}

void Player :: setPlayer(int id, string name)
{
    playerId = id;
    playerName = name;
}
