/**
 * Kathryn bought 750 shares of stock at a price of $35.00 per share. 
 * A year later she sold them for just $31.15 per share. 
 * Write a program that calculates and displays the following:
 *   - The total amount paid for the stock.
 *   - The total amount received from selling the stock.
 *   - The total amount of money she lost.
 */
#include <iostream>
using namespace std;

// function prototypes
void greetings();
void goodbye();

int main()
{
    int stockShares = 750;
    double sharePrice = 35.0,
           salePrice = 31.15;

    double totalPaid = 0.0, totalReceived = 0.0,
           totalLost = 0.0;

    greetings();

    // The total amount paid for the stock   
    totalPaid = stockShares * sharePrice;

    // The total amount received from selling the stock
    totalReceived = stockShares * salePrice;

    // The total amount of money she lost
    totalLost = totalReceived - totalPaid;

    cout << "Total Paid for " << stockShares
         << " stock shares is $" << totalPaid << '\n';
    cout << "Total Received for " << stockShares
         << " stock shares is $" << totalReceived << '\n';
    cout << "Net Profit: $" << totalLost << '\n'; 

    goodbye();
    
    return 0;
}

// function definition
void greetings()
{
    cout << "Welcome to my program!\n\n";
}

void goodbye()
{
    cout << "Thank you for using my program!\n";
}
