#include <iostream>
using namespace std;

int main()
{
    // int hours1, hours2, hours3,
    //     hours4, hours5, hours6;
    const int NUM_EMPLOYEES = 6;
    int hours[NUM_EMPLOYEES];

    // Input hours worked
    cout << "Enter the hours worked by "
         << NUM_EMPLOYEES << " employees: ";
    for (int i = 0; i < NUM_EMPLOYEES; ++i)
    {
        cin >> hours[i];
    }

    // int i = 0;
    // cin >> hours[i];
    // ++i;
    // cin >> hours[i];
    // ++i;
    // cin >> hours[i];
    // ++i;
    // cin >> hours[i];
    // ++i;
    // cin >> hours[i];
    // ++i;
    // cin >> hours[i];

    // Display hours worked
    cout << "The hours are: ";
    for (int i = 0; i < NUM_EMPLOYEES; ++i)
    {
        cout << " " << hours[i];
    }
    cout << '\n';

    // cout << " " << hours[0];
    // cout << " " << hours[1];
    // cout << " " << hours[2];
    // cout << " " << hours[3];
    // cout << " " << hours[4];
    // cout << " " << hours[5];
    // cout << '\n';
    return 0;
}