/**
 * @file code1.cpp
 * @author Gabe de la Cruz
 * @brief The area of a rectangle is the rectangle's length times its width. 
 *        This program will ask user for the length and width of two rectangles.
 *        The program should then tell the user which rectangle has the 
 *        greater area or if the areas are the same.
 * @version 0.1
 * @date 2020-09-18
 * 
 */
#include <iostream>
using namespace std;

int main()
{
    double length1 = 0.0, width1 = 0.0;
    cout << "Rectangle 1\n";
    cout << "===========\n";
    cout << "Enter length: ";
    cin >> length1;
    cout << "Enter width: ";
    cin >> width1;

    double length2 = 0.0, width2 = 0.0;
    cout << "Rectangle 1\n";
    cout << "===========\n";
    cout << "Enter length: ";
    cin >> length2;
    cout << "Enter width: ";
    cin >> width2;

    double area1 = length1 * width1;
    double area2 = length2 * width2;


    return 0;
}