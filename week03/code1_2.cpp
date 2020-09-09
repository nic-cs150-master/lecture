#include <iostream>
#include <string>
using namespace std;

int main()
{
    const double INTEREST_RATE = 0.069;
    double amount, balance;

    cout << "Enter balance: ";
    cin >> balance;

    amount = balance * INTEREST_RATE;

    cout << "Result = " << amount << '\n';


    

    // int books;
    // int months;
    // double booksPerMonth;

    // cout << "Enter number of books: ";
    // cin >> books;

    // cout << "Enter number of months: ";
    // cin >> months;

    // // booksPerMonth = books / static_cast<double>(months);
    // // booksPerMonth = static_cast<double>(books) / months;
    // // booksPerMonth = static_cast<double>(books) / static_cast<double>(months);
    // booksPerMonth = static_cast<double>(books / months);

    // cout << "books per month = " << booksPerMonth << '\n';


    // int x = 2, y = 3, z = 4, total = 0;

    // // total = x + y + z;
    // cout << "total = " << x + y + z << '\n';


    // cout << "Welcome to my program!\n\n";

    // char ch;
    // cout << "Press enter to continue...\n";
    // // cin >> ch;
    // cin.get(ch);

    // string name;
    // string address;
    // int age;

    // cout << "Enter name: ";
    // // cin >> name;
    // getline(cin, name);

    // cout << "Enter age: ";
    // cin >> age;
    // cin.ignore();

    // cout << "Enter address: ";
    // // cin >> address;
    // getline(cin, address);


    // int length, width;

    // cout << "What is the length? ";
    // cin >> length;

    // cout << "What is the width? ";
    // cin >> width;

    // cout << "Enter length and width: ";
    // cin >> length >> width;

    // cout << "length = " << length 
    //      << ", width = " << width << '\n';

    return 0;
}