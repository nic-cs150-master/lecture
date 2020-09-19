#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int score1, score2, score3;
    double average;

    cout << "Enter 3 test scores and I will average them: ";
    cin >> score1 >> score2 >> score3;  // multiple input

    average = (score1 + score2 + score3) / 3.0;

    cout << fixed << setprecision(1);
    cout << "Your average is " << average << '\n';

    if (average == 100)   // WARNING: No semi-colon
    {
        cout << "Congratulations! ";
        cout << "That's a perfect score!\n";
    }

    // int x = 5, y = 10;
    // cout << (x <= y) << '\n';
    // cout << (y == x) << '\n'; // Common Error: using = instead of ==

    return 0;
}