/**
 * @file code3.cpp
 * 
 * Sum of Two Numbers
 * A program that stores the integers 50 and 100 
 * in variables and stores the sum of these two in 
 * a variable named total. Display the total on the screen.
 * 
 * @name Gabe de la Cruz
 * @date September 9, 2020
 */
#include <iostream>
using namespace std;

int main()
{
    int num1 = 50,
        num2 = 100;
    int total = 0;

    // Sum of num1 and num2
    total = num1 + num2;

    cout << "Total of " 
         << num1 << " and "
         << num2 << " is " << total << '\n';

    return 0;
}