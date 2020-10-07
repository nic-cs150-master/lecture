#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    cout << "Welcome to my program!\n";

    ofstream out;
    out.open("Friends2.txt");

    out << "Mozart      \n";
    out << "Katy Perry\n";
    out << "Michael Jordan\n";

    out.close();

    return 0;
}