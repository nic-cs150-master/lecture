#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in;

    in.open("Friends.txt");

    cout << "Reading data from Friends.txt\n";

    for (int ctr = 0; ctr < 3; ++ctr)
    {
        string name;
        // in >> name;
        getline(in, name); // looks for newline
        cout << "Friend #" << ctr+1 << ": "
             << name << '\n';
    }

    return 0;
}