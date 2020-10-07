#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in;

    // establish connection to a file
    in.open("Friends2.txt");

    cout << "Here are my friend\n";

    for (int i = 0; i < 3; ++i)
    {
        string name;
        // in >> name;
        getline(in, name);
        cout << name << '\n';
    }

    return 0;
}