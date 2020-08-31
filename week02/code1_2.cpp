#include <iostream>
#include <string>
using namespace std;

int main()
{
    // cout << "Hello, World!\n";
    // cout << "Hello, " << "World!\n";
    cout << "Hello, " 
         << "World!" << endl;

    cout << "Hello, ";
    cout << "World!\n";

    cout << "\"Hi\tThere!\"\n";

    int age = 18;
    cout << "Current age: " << age << endl;
    age = 17;
    cout << "New age: " << age << endl;

    double someDoubleNumber = 2.3;
    cout << "Double number: " << someDoubleNumber << '\n';

    char letter = 97;
    cout << letter << '\n';

    string name = "George";
    cout << "Hi " << name << "!\n";

    bool isOpen = 14;
    cout << "Is it open: " << isOpen << '\n';

    return 0;
}