/**
 * @file volumeCylinder.cpp
 * 
 * This program claculates the volume of a cylindrical
 * fuel tank. The formula for the volume of a cylinder is
 * PI times radius squared times height. PI is 3.14159.
 * 
 * @author Gaddis book
 * @date September 11, 2020
 */
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const double PI = 3.1416;
    double volume, radius, height;

    cout << "This program will tell you the volume of \n"
         << "a cylinder-shaped fuel tank.\n";
    
    cout << "How tall is the tank? ";
    cin >> height;

    cout << "What is the radius of the tank? ";
    cin >> radius;

    // You must complete the program
    volume = PI * pow(radius, 2) * height;
    // volume = 3.1415 * radius * radius * height;

    cout << "Volume is " << volume << '\n';

    return 0;
}