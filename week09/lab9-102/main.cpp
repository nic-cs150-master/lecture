/**
 * @file main.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-10-26
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#include <iostream>
#include "tictactoe.h"
using namespace std;

int main()
{
    const int NUM_PLAYERS = 2;
    const char PLAYER_TOKEN[NUM_PLAYERS] = {'X', 'O'};

    // declare 2d array that represent the board
    char tttBoard[NUM_ROWS][NUM_COLS];

    // initialize the board with *
    initializeBoard(tttBoard);

    // display the initial board
    displayBoard(tttBoard);

    // determine which player goes first
    int player = 1; // TODO: make this random later
    int countNumPlays = 0; // number of plays between both players

    // game loop
    while (1)
    {
        // 1) user input
        // current player select a board location
        // enter a row and column
        cout << "\nPlayer " << player << ":\n";
        int row, col;
        cin >> row >> col;

        // TODO: user input validation
        // a) location is not already used
        // b) not out of bounds

        // 2) update
        // update the board with player's token based on
        // user input location
        updateBoard(tttBoard, row-1, col-1, PLAYER_TOKEN[player-1]);
        ++countNumPlays;

        // Has the game ended
        // a) determine if current player has won
        if (isWin(tttBoard))
        {
            // prompt current player that he/she won the game
            // break or exit
        }
        // b) draw
        else if (countNumPlays == (NUM_ROWS * NUM_COLS))
        {
            // prompt current player game is a draw
            // break or exit
        }

        // switch players
        // if (player == 1)
        // {
        //     player = 2;
        // }
        // else
        // {
        //     player = 1;
        // }

        player = (player == 1) ? 2 : 1;
        
        // 3) render
        // display the updated board again
        displayBoard(tttBoard);
    } // end of game loop

    return 0;
}