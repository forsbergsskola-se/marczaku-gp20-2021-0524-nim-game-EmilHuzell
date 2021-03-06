// TicTacToe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


int main()
{

    char board[9] = {'_','_','_','_','_','_','_','_','_'};

    bool gameOver = false;
    bool currentPlayer = true;
        
    while(!gameOver) {
        

        //Choose place
        std::cout << "Chose a row to place a piece in" << '\n';
        int row;
        std::cin >> row;
        std::cout << "Chose a column to place a piece in" << '\n';
        int column;
        std::cin >> column;
        int place = 3 * (row - 1) + (column - 1);

        while (board[place] != '_') {
            std::cout << "Place is occupied" << '\n';
            std::cout << "Chose another row to place a piece in" << '\n';
            int row;
            std::cin >> row;
            std::cout << "Chose another column to place a piece in" << '\n';
            int column;
            std::cin >> column;
            place = 3 * (row - 1) + (column - 1);
        }

        if (currentPlayer) {
            board[place] = 'O';
        }
        else {
            board[place] = 'X';
        }
        

        //display board
        for (int i = 0; i < 9; i++)
        {
            //std::cout << "hello" << '/n';
            if (i % 3 == 0) {
                std::cout << '\n';
            }
            std::cout << board[i];
        }
        std::cout << '\n';
        
        //win check
        for (int i = 0; i <3; i++) {
            //check all columns
            if (board[i] == board[i + 3] && board[i + 3] == board[i + 6] && board[i] != '_') {
                
                gameOver = true;
            }
            //check all rows
            if (board[i * 3] == board[i * 3 + 1] && board[i * 3 + 1] == board[i * 3 + 2] && board[i * 3] != '_') {
                gameOver = true;
            }
            //check diagonal
            if (board[0] == board[4] && board[4] == board[8] && board[0] != '_') {
                gameOver = true;
            }
            //check other diagonal
            if (board[2] == board[4] && board[4] == board[6] && board[2] != '_') {
                gameOver = true;
            }
        }
        currentPlayer = !currentPlayer;
        
    } 
    std::cout << "GameOver";
}


