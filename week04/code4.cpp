#include <iostream>
using namespace std;

void displaySum(int n1, int n2);

// all programs start executing in main function
int main()
{
    int num1 = 0, num2 = 0;
    // Ask user to input two integers
    cout << "Enter first integer: ";
    cin >> num1;
    cout << "Enter second integer: ";
    cin >> num2;

    // Compute and display the sum of the two integers
    displaySum(num1, num2);

    // Ask user to input two integers
    cout << "Enter first integer: ";
    cin >> num1;
    cout << "Enter second integer: ";
    cin >> num2;

    // Compute and display the sum of the two integers
    displaySum(num1, num2);

    // Ask user to input two integers
    cout << "Enter first integer: ";
    cin >> num1;
    cout << "Enter second integer: ";
    cin >> num2;

    // Compute and display the sum of the two integers
    displaySum(num1, num2);

    return 0;
}

void displaySum(int n1, int n2)
{
    int result = n1 + n2;
    cout << n1 << " + " << n2
         << " = " << result << '\n';
}