#include <iostream>
using namespace std;

int main()
{
    char employed,    // Currently employed? (Y or N)
        recentGrad;  // Recent college graduate? (Y or N)

    // Is the applicant employed and a recent college graduate?
    cout << "Answer the following questions\n";
    cout << "with either Y for Yes or N for No.\n";

    cout << "Are you employed?";
    cin >> employed;
    cout << "Have you graduated from college in the past two years? ";
    cin >> recentGrad;

    // Determine the applicant's loan qualifications
    if ((employed == 'Y' || employed == 'y') && (recentGrad == 'Y' || recentGrad == 'y'))
    {
        cout << "You qualify for the special interest rate.\n";
    }
    else  // Employed but not a recent grad
    {
        cout << "You must have graduated from college in the past\n";
        cout << "two years to qualify for the special interest rate.\n";
    }


    return 0;
}