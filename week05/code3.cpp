#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Determines whether a loan applicant qualifies for a 
    // special loan interest rate.
    const double ADULT_RATE = 120.0;
    const double CHILD_RATE = 60.0;
    const double SENIOR_RATE = 100.0;

    int choice;

    cout << "   Health Club Membership Menu\n\n";
    cout << "1. Standard Adult Membership\n";
    cout << "2. Child Membership\n";
    cout << "3. Senior Citizen Membership\n";
    cout << "4. Quit the Program\n\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << fixed << setprecision(2);

    if (choice >= 1 && choice <= 3) // guarantees choice is 1 to 4
    {
        int months;
        double charges;
        cout << "For how many months? ";
        cin >> months;

        if (choice == 1)
        {
            charges = months * ADULT_RATE;
        }
        else if (choice == 2)
        {
            charges = months * CHILD_RATE;
        }
        else if (choice == 3)
        {
            charges = months * SENIOR_RATE;
        }

        cout << "\nThe total charges is $" << charges << endl;
    }
    else if (choice != 4) // Will else work here? Any alternative to choice != 4?
    {
        cout << "\nThe valid choices are 1 through 4.\n"
             << "Run the program again and select one those.\n";
    }

    return 0;
}
