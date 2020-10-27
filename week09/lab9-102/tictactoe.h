/**
 * @file tictactoe.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-10-26
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#ifndef TICTACTOE_H
#define TICTACTOE_H

#include <iostream>
using namespace std;

const int NUM_ROWS = 3;
const int NUM_COLS = 3;

void initializeBoard(char board[][NUM_COLS]);
void displayBoard(const char board[][NUM_COLS]);
void updateBoard(char board[][NUM_COLS], int row, int col, char playerToken);
bool isWin(const char board[][NUM_COLS]);

#endif