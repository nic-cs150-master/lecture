#include <iostream>
using namespace std;

// display
void displayIntArray(const int arr[], int sizeOfArray);
// sumIntArray
int sumIntArray(const int arr[], int sizeOfArray);
// getHighest
int getHighest(const int arr[], int sizeOfArray);
// getLowest


int main()
{
    const int NUM_WORKERS = 5;
    int hours[NUM_WORKERS];

    const int NUM_WORKERS2 = 10;
    int hours2[NUM_WORKERS2] = {10, 4, 34, 56, 12, 56, 76, 34, 67, 12};

    // // Input hours worked
    // cout << "Enter the hours worked by "
    //      << NUM_WORKERS << " employees: ";
    // for (int i = 0; i < NUM_WORKERS; ++i)
    // {
    //     cin >> hours[i];
    // }

    // Display hours worked
    cout << "The hours are: ";
    displayIntArray(hours2, NUM_WORKERS2);
    // for (int i = 0; i < NUM_WORKERS; ++i)
    // {
    //     cout << " " << hours[i];
    // }
    // cout << '\n';

    
    int sumOfHOurs = sumIntArray(hours2, NUM_WORKERS2);
    double averageHours = static_cast<double>(sumOfHOurs) / NUM_WORKERS2;
    // cout << sumIntArray(hours2, NUM_WORKERS2) << '\n';

    cout << "The sums of the hours worked: " << sumOfHOurs << '\n';
    cout << "The average hour: " << averageHours << '\n';

    int bigNumberIndex = getHighest(hours2, NUM_WORKERS2);
    cout << "The most hard working worker goes to Employee #" << bigNumberIndex + 1 << '\n';
    cout << "With # of hours at " << hours2[bigNumberIndex] << '\n';

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

int sumIntArray(const int arr[], int sizeOfArray)
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
    int highest = arr[0]; // assume first element is highest
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