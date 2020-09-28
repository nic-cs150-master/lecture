#include <iostream>
#include <iomanip>
using namespace std;

// const int ADULT = 1;
// const int CHILD = 2;
// const int SENIOR = 3;
enum MemberType {ADULT=1, CHILD, SENIOR};

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

        switch (choice)
        {
            case ADULT:
                charges = months * ADULT_RATE;
                break;
            case CHILD:
                charges = months * CHILD_RATE;
                break;
            case SENIOR:
                charges = months * SENIOR_RATE;
                break;
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
