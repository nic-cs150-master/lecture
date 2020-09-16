#include <iostream>
#include <string>
using namespace std;

int main()
{
    string state = "Idaho Potato";  // space is counted by the \0 at the end is not
    
    cout << state << '\n';
    int size = state.length();
    cout << "Length is " << size << '\n';
    // int size = state.length();

    string asterisks;
    asterisks.assign(50, '-');
    cout << asterisks << '\n';

    string firstName = "Gabe";
    string lastName = "de la Cruz";
    string fullName;
    fullName = firstName + " " + lastName;
    cout << fullName << '\n';

    char word[10] = "Hello";
    cout << word << '\n';
    cout << "Enter a word: ";
    cin >> word;
    cout << "new word: " << word << '\n';

    return 0;
}