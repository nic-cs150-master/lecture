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

    // ;
    // ;
    // ;
    // ;
    // ;
    // ;

    // {
    //     cout << "Hi\n";
    //     cout << "Hello\n";
    // }

    if (average == 100)
        cout << "Congratulations";


    if (average == 100)  // WARNING: No semi-colon
    {
        cout << "Congratulations! ";
        cout << "That's a perfect score!\n";
    }

    return 0;
}