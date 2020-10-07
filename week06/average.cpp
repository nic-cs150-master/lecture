#include <iostream>
using namespace std;

int main()
{
    // char again = 'Y';  // Loop again? Y or N 
    while (1)
    {
        // Get three test scores
        int score1 = 0,  // test score 1
            score2 = 0,  // test score 2
            score3 = 0;  // test score 3
        cout << "\nEnter 3 scores and I will average them: ";
        cin >> score1 >> score2 >> score3;

        // Calculate and display the average
        double average = (score1 + score2 + score3) / 3.0;
        cout << "The average is " << average << "\n\n";

        // Does the user want to average another set?  
        char again = '\0';  // Loop again? Y or N 
        cout << "Do you want to average another set? (Y/N) ";
        cin >> again;

        if (again == 'N' || again == 'n')
        {
            break;
        }
    } 

    return 0;
}


// int main()
// {
//     char again = '\0';  // Loop again? Y or N 
//     do
//     {
//         // Get three test scores
//         int score1 = 0,  // test score 1
//             score2 = 0,  // test score 2
//             score3 = 0;  // test score 3
//         cout << "\nEnter 3 scores and I will average them: ";
//         cin >> score1 >> score2 >> score3;

//         // Calculate and display the average
//         double average = (score1 + score2 + score3) / 3.0;
//         cout << "The average is " << average << "\n\n";

//         // Does the user want to average another set?  
//         cout << "Do you want to average another set? (Y/N) ";
//         cin >> again;
//     } while (again != 'N' || again != 'n'); // do not forget the semi-colon

//     return 0;
// }