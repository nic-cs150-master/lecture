#include <iostream>
using namespace std;

void displayIntArray(const int arr[], int sizeOfArray);
// sumArray
int sumArrayInt(const int arr[], int sizeOfArray);
// getHighest
// two ways of what value should be returned
int getHighest(const int arr[], int sizeOfArray);
// getLowest

int main()
{
    const int NUM_WORKERS = 5;
    int hours[NUM_WORKERS];
    const int NUM_WORKERS2 = 10;
    int hours2[NUM_WORKERS2] = {23, 34, 12, 54, 65, 23, 78, 45, 67, 78};

    // Input hours worked
    // cout << "Enter the hours worked by "
    //      << NUM_WORKERS << " employees: ";
    // for (int i = 0; i < NUM_WORKERS; ++i)
    // {
    //     cin >> hours[i];
    // }

    // Display hours worked
    cout << "The hours are: ";
    displayIntArray(hours2, NUM_WORKERS2);
    
    int sumResult = sumArrayInt(hours2, NUM_WORKERS2);
    double averageHour = static_cast<double>(sumResult) / NUM_WORKERS2;
    cout << "Sum of employee hours = " << sumResult << '\n';
    cout << "Average hour = " << averageHour << '\n';

    int highIndex = getHighest(hours2, NUM_WORKERS2);
    cout << "The most hardworking employee is Employee#" << highIndex + 1 << '\n';
    cout << "Worked this week for " << hours2[highIndex] << " hours\n";

    return 0;
}

void displayIntArray(const int arr[], int sizeOfArray)
{
    for (int i = 0; i < sizeOfArray; ++i)
    {
        cout << arr[i] << ' ';
    }
    cout << '\n';
}

int sumArrayInt(const int arr[], int sizeOfArray)
{
    int sum = 0; // accumulator
    for (int i = 0; i < sizeOfArray; ++i)
    {
        sum += arr[i];
    }
    return sum;
}

int getHighest(const int arr[], int sizeOfArray)
{
    // assume that first element is the largest value
    int highest = arr[0]; 
    int highestIndex = 0;

    for (int i = 1; i < sizeOfArray; ++i)
    {
        if (arr[i] > highest)
        {
            highest = arr[i];
            highestIndex = i;
        }
    }

    return highestIndex;
}