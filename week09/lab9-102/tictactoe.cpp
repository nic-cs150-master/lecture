/**
 * @file tictactoe.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-10-26
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#include "tictactoe.h"

/**
 * @brief 
 * 
 * @param board 
 */
void initializeBoard(char board[][NUM_COLS])
{
    // assign each element in the 2d array with *
    for (int row = 0; row < NUM_ROWS; ++row)
    {
        for (int col = 0; col < NUM_COLS; ++col)
        {
            board[row][col] = '*';
        }
    }
}

/**
 * @brief 
 * 
 * @param board 
 */
void displayBoard(const char board[][NUM_COLS])
{
    cout << "          1         2         3\n";
    for (int row = 0; row < NUM_ROWS; ++row)
    {
        cout << row + 1;
        for (int col = 0; col < NUM_COLS; ++col)
        {
            cout << "         " << board[row][col];
        }
        cout << '\n';
    }
}