#include <iostream>
#include <fstream>
#include <cstdlib> // exit()
#include <string>
using namespace std;

int main()
{
    ifstream inFile;

    inFile.open("data/students.csv");

    // test
    if (!inFile)
    {
        cout << "Error opening the file\n";
        exit(1);
    }

    while (!inFile.eof())
    {
        char delim;

        int id;
        inFile >> id;
        inFile >> delim;

        string name;
        getline(inFile, name, ',');

        int age;
        inFile >> age;
        inFile >> delim;

        char gender;
        inFile >> gender;
        inFile >> delim;

        int score1, score2, score3;
        inFile >> score1 >> delim
               >> score2 >> delim
               >> score3;
               

        cout << name << '\n'
             << '\t' << age << ' ' << gender << '\n'
             << '\t' << score1 << ' ' << score2 << ' ' << score3 << '\n';

    }

    return 0;
}