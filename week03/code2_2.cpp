#include <iostream>

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
  
    // compute for books per month
    booksPerMonth = static_cast<double>(books) / months;
    // booksPerMonth = books / static_cast<double>(months);
    // booksPerMonth = static_cast<double>(books / months); // wrong

    cout << "Books per month: " << booksPerMonth << '\n';

    return 0;
}