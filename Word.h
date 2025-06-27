# pragma once

# include <string>
# include <set>

using namespace std;

class Word
{
    private :
        string actualWord;
        string displayWord;
        set <char> guessedLetters;
        string hint;

    public : 
        Word();

        void initialize(const string& word, const string& hintText);
        bool revealLetter(char guess);
        bool isComplete() const;
        string getDisplayWord() const;
        string getActualWord() const;
        string getHint() const;

};