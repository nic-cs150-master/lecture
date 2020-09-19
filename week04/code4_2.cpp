// This program has six functions
#include <iostream>
using namespace std;

void displaySum(int num1, int num2);

// all programs start executing in main function
int main()
{
    int lhs = 0, rhs = 0, result;
    // Ask user to input two integers
    cout << "Enter first integer: ";
    cin >> lhs;
    cout << "Enter second integer: ";
    cin >> rhs;

    // Compute and display the sum of the two integers
    displaySum(lhs, rhs);

    // Ask user to input two integers
    cout << "Enter first integer: ";
    cin >> lhs;
    cout << "Enter second integer: ";
    cin >> rhs;

    // Compute and display the sum of the two integers
    displaySum(lhs, rhs);

    // Ask user to input two integers
    cout << "Enter first integer: ";
    cin >> lhs;
    cout << "Enter second integer: ";
    cin >> rhs;

    // Compute and display the sum of the two integers
    displaySum(lhs, rhs);

    return 0;
}

void displaySum(int num1, int num2)
{
    int result;
    result = num1 + num2;
    cout << num1 << " + " << num2 
         << " = " << result << '\n';
}