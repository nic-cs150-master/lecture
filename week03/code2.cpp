#include <iostream>
#include <string>

using namespace std;

int main()
{
    int books;
    int months;

    cout << "Enter number of books: ";
    cin >> books;

    cout << "Enter months: ";
    cin >> months;

    double booksPerMonth;
    booksPerMonth = static_cast<double>(books) / months;
    // booksPerMonth = books / static_cast<double>(months);

    cout << "Books per month: " << booksPerMonth << '\n';


    char ch;
    cout << "Welcome to my Program\n\n\n";
    cout << "Press enter to continue ";
    // cin >> ch;
    cin.get(ch);

    string name, address;
    int age;
    cout << "Enter name: ";
    // cin >> name;
    getline(cin, name);

    cout << "Enter age: ";
    cin >> age;
    cin.ignore();

    cout << "Enter address: ";
    // cin >> address;
    getline(cin, address);

    
    

    return 0;
}