#include <iostream>
using namespace std;

int main()
{
    const int MIN_A_SCORE = 90,
              MIN_B_SCORE = 80,
              MIN_C_SCORE = 70,
              MIN_D_SCORE = 60;

    bool goodScore = true;

    int testScore = 0;   // Holds a numeric test score
    char grade;      // Holds a letter grade
    
    // int numStudents;
    // cout << "Enter number of students: ";
    // cin >> numStudents;

    while (testScore != -1)
    {
        cout << "Enter your numeric test score: ";
        cin >> testScore;

        if (testScore >= MIN_A_SCORE)
            grade = 'A';
        else if (testScore >= MIN_B_SCORE)
            grade = 'B';
        else if (testScore >= MIN_C_SCORE)
            grade = 'C';
        else if (testScore >= MIN_D_SCORE)
            grade = 'D';
        else if (testScore >= 0)
            grade = 'F';
        else
            goodScore = false;   // The score was below 0
        
        if (goodScore)
            cout << "Your grade is " << grade << ".\n";
        else
            cout << "The score cannot be below zero.\n";

        // count = count + 1;
        // numStudents -= 1;
    }

    return 0;
}