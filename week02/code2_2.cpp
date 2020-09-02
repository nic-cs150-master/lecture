/**
 * Chapter 2, Programming Challenge #1: Sum of Two Numbers
 * Write a program that stores the integers 50 and 100 in 
 * variables and stores the sum of these two in a variable 
 * named total. Display the total on the screen.
 */
#include <iostream>
using namespace std;

int main()
{
    int num1 = 50, num2 = 100;
    int total = 0;

    total = num1 + num2;

    cout << "Sum of " << num1 << " + " << num2 << " is " << total << '\n';

    return 0;
}