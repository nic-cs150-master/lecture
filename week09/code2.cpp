#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
    const int NUM_EMPLOYEES = 6;
    int hours[NUM_EMPLOYEES];
    
    ifstream inputFile;
    inputFile.open("work.txt");

    if (!inputFile)
    {
        cout << "Error opening data file\n";
        exit(1);
    }
    else
    {
        int count = 0;
        while (count < NUM_EMPLOYEES && !inputFile.eof())
        {
            inputFile >> hours[count];
            ++count;
        }
        inputFile.close();
    }

    cout << "The hours worked by each employee are\n";
    for (int employee = 0; employee < NUM_EMPLOYEES; ++employee)
    {
        cout << "Employee " << (employee + 1) << ": ";
        cout << hours[employee] << '\n';
    }

    hours[0] = 100;
    hours[1] = 50;

    ofstream outFile;
    outFile.open("work.txt"); 
    for (int employee = 0; employee < NUM_EMPLOYEES; ++employee)
    {
        outFile << hours[employee] << '\n';
    }
    outFile.close();

    return 0;
}