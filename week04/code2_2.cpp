#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main()
{
    // int seed = time(NULL);
    // cout << "enter a seed: ";
    // cin >> seed;
    // cout << seed << '\n';
    srand(time(NULL));

    int dice1 = rand() % 6 + 1;
    int dice2 = rand() % 6 + 1;

    cout << "dice1=" << dice1 << " dice2=" << dice2 << '\n';

    return 0;
}