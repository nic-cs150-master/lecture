#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream outputFile;

    // Open the output file
    outputFile.open("Friends.txt");

    // Use a loop to get the names of three friends
    // and write each name in the output file
    cout << "Enter the names of three friends.\n";

    for (int count = 1; count <= 3; ++count)
    {
        string name;
        cout << "Friend #" << count << ": ";
        cin >> name;
        outputFile << name << endl;
    }

    outputFile.close();     // Close the file

    cout << "The names were saved to a file.\n";

    // int x = 234;
    // ofstream out;

    // out.open("demo.txt");

    // cout << "Enter x: ";
    // cin >> x;

    // cout << "Writing to a file\n"; // terminal

    // out << "Bach\n";
    // out << "Mozart\n";
    // out << "Michael Jordan\n";
    // out << "Katy Perry " << x << "\n";

    // out.close();

    return 0;
}