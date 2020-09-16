#include <iostream>
#include <iomanip> // setw()
using namespace std;

int main()
{

    // Enter the sales for day 1: 321.57[Enter]
    // Enter the sales for day 2: 269.60[Enter]
    // Enter the sales for day 3: 307.00[Enter]
    // Sales Figures
    // ----------------
    // Day 1:   321.57
    // Day 2:    269.6
    // Day 3:      307
    // Total:   898.17

    double day1;
    cout << "Enter the sales for day 1: ";
    cin >> day1;

    double day2;
    cout << "Enter the sales for day 2: ";
    cin >> day2;

    double day3;
    cout << "Enter the sales for day 3: ";
    cin >> day3;

    cout << fixed << setprecision(2);
    cout << "Sales Figures\n";
    cout << "----------------\n";
    cout << "Day 1: " << left << setw(8) << day1 << '\n';
    cout << "Day 2: " << setw(8) << day2 << '\n';
    cout << "Day 3: " << right << setw(8) << day3 << '\n';
    cout << "Total: " << setw(8) << day1 + day2 + day3 << '\n';

    


    // double number1 = 132.364, number2 = 26.91;
    // double quotient;
    // quotient = number1 / number2;
    // cout << quotient << endl;
    // cout << setprecision(5) << quotient << endl;
    // cout << setprecision(4) << quotient << endl; 
    // cout << setprecision(3) << quotient << endl; 
    // cout << setprecision(2) << quotient << endl; 
    // cout << setprecision(1) << quotient << endl; 

    // int num1 = 2897, num2 = 3455, num3 = 837,
    //     num4 = 3435,   num5 = 2436, num6 = 1623; 

    // cout << setw(6) << num1 << setw(6) << num2 << setw(6) << num3 << endl;
    // cout << setw(6) << num4 << setw(6) << num5 << setw(6) << num6 << endl;

    return 0;
}