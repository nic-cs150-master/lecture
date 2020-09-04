/*
Stock Loss
Kathryn bought 750 shares of stock at a price of $35.00 per share. 
A year later she sold them for just $31.15 per share. 
Write a program that calculates and displays the following:
- The total amount paid for the stock.
- The total amount received from selling the stock.
- The total amount of money she lost.
*/
#include <iostream>
using namespace std;

// Function prototypes
void welcomeGreeting();
void goodBye();

int main()
{
    int amountOfStocks = 750;
    double pricePerStock = 35.0,
           pricePerStockSold = 31.15;

    double totalAmountPaid = 0.0,
           totalAmountRecieved = 0.0,
           netGain = 0.0;

    welcomeGreeting();

    // The total amount paid for the stock.
    totalAmountPaid = amountOfStocks * pricePerStock;

    // The total amount received from selling the stock.
    totalAmountRecieved = amountOfStocks * pricePerStockSold;

    // The total amount of money she lost.
    netGain = totalAmountRecieved - totalAmountPaid;
    
    cout << "Total amount paid for " 
         << amountOfStocks << " shares is $" 
         << totalAmountPaid << '\n';
    cout << "Total amount received for " 
         << amountOfStocks << " shares is $" 
         << totalAmountRecieved << '\n';
    cout << "With a net gain of $" << netGain << '\n';

    goodBye();

    return 0;
}

// Function definitions
void welcomeGreeting()
{
    cout << "Welcome to my program!\n\n";
    cout << "Program starting...\n";
}

void goodBye()
{
    cout << "Thank you for using my program!\n";
}
