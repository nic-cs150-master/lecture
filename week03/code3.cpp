#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // int x = 2;
    // x *= 4 + 10;   // x = x * 4 + 10;  or  x = x * (4 + 10); ????

    // cout << "x = " << x << '\n';

    // int num1 = 2897, num2 = 5, num3 = 837,
    //     num4 = 3423, num5 = 7, num6 = 1623; 
    // // cout << num1 << "   " << num2 << "   " << num3 << endl;
    // // cout << num4 << "     " << num5 << "   " << num6 << endl;

    // cout << setw(6) << num1 << setw(6) << num2 << setw(6) << num3 << endl;
    // cout << setw(6) << num4 << setw(6) << num5 << setw(6) << num6 << endl;


    // double number1 = 132.364, number2 = 26.91;
    // double quotient;
    // quotient = number1 / number2;
    // cout << quotient << endl;
    // cout << setprecision(5) << quotient << endl;
    // cout << setprecision(4) << quotient << endl; 
    // cout << setprecision(3) << quotient << endl; 
    // cout << setprecision(2) << quotient << endl; 
    // cout << setprecision(1) << quotient << endl; 

    // cout << setprecision(2);
    // cout << quotient << endl;
    // cout << number1 << endl;
    // cout << setprecision(3);
    // cout << number2 << endl;

    // Enter the sales for day 1: 321.57[Enter]
    // Enter the sales for day 2: 269.60[Enter]
    // Enter the sales for day 3: 307.00[Enter]
    // Sales Figures
    // ----------------
    // Day 1:   321.57
    // Day 2:    269.6
    // Day 3:      307
    // Total:   898.17

    double sales1;
    cout << "Enter the sales for day 1: ";
    cin >> sales1;

    double sales2;
    cout << "Enter the sales for day 2: ";
    cin >> sales2;

    double sales3;
    cout << "Enter the sales for day 3: ";
    cin >> sales3;

    double total = sales1 + sales2 + sales3;

    cout << setprecision(2);
    cout << fixed << setprecision(2);
    cout << "\nSales Figures\n";
    cout << "----------------\n";
    cout << left;
    cout << "Day 1: " << setw(8) << sales1 << '\n';
    cout << "Day 2: " << setw(8) << sales2 << '\n';
    cout << right;
    cout << "Day 3: " << setw(8) << sales3 << '\n';
    cout << "Total: " << setw(8) << total << '\n';

    double x = 6.0;
    cout << x << endl;
    cout << showpoint << x << endl;
    cout << setprecision(2) << x << endl;
    cout << fixed << x << endl;


    return 0;
}