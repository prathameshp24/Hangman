# pragma once

# include <string>

using namespace std;

class Player
{
    private : 
        int playerId;
        string playerName;
        int score;
        int highScore;
        int puzzlesSolved;

    public : 

        Player();

        void updateScore(int points);
        void updateHighScore();
        void incrementSolved();
        void displayStats();
        void setPlayer(int id, string name);

};