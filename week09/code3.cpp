#include <iostream>
using namespace std;

int main()
{
    int values[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i < 10; ++i)
    {
        cout << "'" << values[i] << "' "; 
    }
    cout << '\n';

    return 0;
}