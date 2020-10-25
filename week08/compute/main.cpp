#include <iostream>
#include "intmath.h"
using namespace std;

int main()
{
    int i, j;
    cout << "Enter the first integer: ";
    cin >> i;
    cout << "Enter the second integer: ";
    cin >> j;
    cout << "Greatest common divisor: "
         << gcd(i, j) << ".\n" ;
    cout << "Least common multiple: " 
         << lcm(i, j) << ".\n" ;
    return 0;
}
