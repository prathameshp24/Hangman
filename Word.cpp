# include "Word.h"
# include <iostream>
# include <cctype>

Word :: Word()
{
    actualWord = "";
    displayWord = "";
    hint = "";
    guessedLetters.clear();
}

void Word :: initialize(const string& word, const string& hintText)
{
    actualWord = word;
    hint = hintText;
    displayWord = "";

    for(char c : word)
    {
        if(isalpha(c))
        {
            displayWord += "_";
        }
        else
        {
            displayWord += c;
        }
    }

    guessedLetters.clear();
}

bool Word::revealLetter(char guess) {
    guess = toupper(guess);  // Normalize guess
    bool found = false;

    if (guessedLetters.count(guess)) {
        cout << "You already guessed '" << guess << "'.\n";
        return false;  // Don't penalize, just inform
    }

    guessedLetters.insert(guess);

    for (int i = 0; i < actualWord.length(); ++i) {
        char actualChar = toupper(actualWord[i]);  // Normalize word letter
        if (actualChar == guess) {
            displayWord[i] = actualWord[i]; // Preserve original case for display
            found = true;
        }
    }

    return found;
}


bool Word :: isComplete() const
{
    return displayWord == actualWord;
}

string Word :: getDisplayWord() const
{
    string spaced;

    for(char c : displayWord)
    {
        spaced += c + string(" ");
    }

    return spaced;
}

string Word :: getActualWord() const
{
    return actualWord;
}

string Word :: getHint() const
{
    return hint;
}