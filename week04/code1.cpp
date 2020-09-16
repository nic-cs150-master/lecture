#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word = "How are you?";

    cout << word << '\n';
    cout << "Length of " << word << " is " << word.length() << '\n';

    int x = word.length();
    cout << "length = " << x << '\n';

    string asterisks;
    asterisks.assign(20, '-');
    cout << asterisks << '\n';

    string firstName = "Gabe";
    string lastName = "de la Cruz";
    string fullName;
    fullName = firstName + " " + lastName;

    cout << fullName << '\n';

    return 0;
}