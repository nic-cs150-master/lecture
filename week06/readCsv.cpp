#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib> // exit()
using namespace std;

int main()
{
    ifstream inputFile;

    inputFile.open("data/students.csv");

    // test
    if (!inputFile)
    {
        cout << "Error opening file!\n";
        exit(1);
    }

    while (!inputFile.eof())
    {
        char delim;
        int studentId;

        inputFile >> studentId >> delim;

        string name;
        getline(inputFile, name, ',');

        int age;
        inputFile >> age >> delim;

        char gender;
        inputFile >> gender >> delim;

        int score1, score2, score3;
        inputFile >> score1 >> delim;
        inputFile >> score2 >> delim;
        inputFile >> score3;

        cout << studentId << ' '
             << name << ' '
             << age << ' '
             << gender << ' '
             << score1 << ' ' 
             << score2 << ' ' 
             << score3 << '\n';
    }

    return 0;
}