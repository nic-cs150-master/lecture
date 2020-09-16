#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    // cout << "Enter seed: ";
    // int seed;
    // cin >> seed;
    // int seed = time(NULL);
    // cout << "seed: " << seed << '\n';
    // srand(seed);
    srand(time(NULL));

    int dice1 = rand() % 6 + 1;
    int dice2 = rand() % 6 + 1;

    cout << "dice1=" << dice1 << " " << "dice2=" << dice2 << '\n';
    // cout << rand() % 6 + 1 << '\n';
    // cout << rand() % 6 + 1 << '\n';
    // cout << rand() % 6 + 1 << '\n';
    // cout << rand() % 6 + 1 << '\n';
    // cout << rand() % 6 + 1 << '\n';
    return 0;
}