#include <iostream>
using namespace std;

// function prototypes
void displayIntro();
void goodbye();

int main()
{
    displayIntro();

    // statements

    goodbye();

    return 0;
}

// function definitions
void displayIntro()
{
    cout << "Welcome to my game!\n";
    cout << "Glad to have you with us\n\n";
}

void goodbye()
{
    cout << "Thank you for playing the game\n";
}