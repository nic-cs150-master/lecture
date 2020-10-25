#include <iostream>
#include <fstream>
#include <cstdlib> // exit()
using namespace std;

int main()
{
    const int NUM_EMPLOYEES = 6;
    int hours[NUM_EMPLOYEES];
    
    ifstream inputFile;
    inputFile.open("work2.txt");

    if (!inputFile)
    {
        cout << "Error opening data file\n";
        exit(1);
    }

    int count = 0;
    while ((count < NUM_EMPLOYEES) && !inputFile.eof())
    {
        inputFile >> hours[count];
        ++count;
    }
    inputFile.close();

    // int count = 0;
    // while ((count < NUM_EMPLOYEES) && (inputFile >> hours[count]))
    //     ++count;

    
    cout << "The hours worked by each employee are\n";
    for (int employee = 0; employee < count; ++employee)
    {
        cout << "Employee " << (employee + 1) << ": ";
        cout << hours[employee] << '\n';
    }


    hours[0] = 235;
    hours[3] = 56;

    ofstream outFile;
    outFile.open("work2.txt");
    for (int employee = 0; employee < count; ++employee)
    {
        // cout << hours[employee] << '\n';
        outFile << hours[employee] << '\n';
    }
    outFile.close();

    return 0;
}