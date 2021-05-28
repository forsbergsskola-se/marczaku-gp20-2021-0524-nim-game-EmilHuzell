// NimGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
class Matches {       // The class
public:             // Access specifier
    int Remaining;        // Attribute (int variable)
    char MatchSymbol;
    void DisplatMatches() {
        std::string MatchString;
        for (int i = 0; i < Remaining; i++) {
            MatchString += MatchSymbol;
        }
                 // Method/function defined inside the class
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


    }// Attribute (string variable)
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
    std::cout << Turn << " you have lost the game" << '\n';
    

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
