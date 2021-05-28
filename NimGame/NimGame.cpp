// NimGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
class Matches {       
public:          
    int Remaining;       
    char MatchSymbol;
    void DisplatMatches() {
        std::string MatchString;
        for (int i = 0; i < Remaining; i++) {
            MatchString += MatchSymbol;
        }
        std::cout << MatchString << '\n';
    }
    void removeMatches(int amount) {
        if (amount > 3) {
            amount = 3;
        }
        if (amount < 1) {
            amount = 1;
        }
        Remaining -= amount;
    }
};

int main()
{

    Matches matches;
    matches.Remaining = 24;
    matches.MatchSymbol = 'I';

    std::string Player1;
    std::string Player2;
    std::cout << "Player one choose a name" << '\n';
    std::cin >> Player1;
    std::cout << "Player two choose a name" << '\n';
    std::cin >> Player2;

    std::string Turn;

    while (matches.Remaining > 0)
    {
        if (Turn == Player1) {
            Turn = Player2;
        }
        else {
            Turn = Player1;
        }
        matches.DisplatMatches();
        std::cout << Turn << " choose how many matches you want to take" << '\n';
        int matchesTaken;
        std::cin >> matchesTaken;
        matches.removeMatches(matchesTaken);
        matches.DisplatMatches();
        
    }
    std::cout << '\n' << Turn << " you have lost the game" ;
}

