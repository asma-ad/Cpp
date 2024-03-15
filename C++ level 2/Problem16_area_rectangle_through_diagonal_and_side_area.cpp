#include <iostream>
#include <cmath>
using namespace std;
/*
Problem #16:
Write a program to calculate rectangle area through diagonal and
side area of rectangle, and print it on the screen.
*/

void readValues(float &a, float &d)
{
    cout << "Enter A: ";
    cin >> a;
    cout << "Enter D: ";
    cin >> d;
}

float rectangleAreaBySideAndDiagonal(float a, float d)
{
    return a * sqrt(pow(d, 2) - pow(a, 2));
}

void printResult(float area)
{
    cout << "\nRectangle area = " << area << endl;
}

int main()
{
    float a, d;
    readValues(a, d);
    printResult(rectangleAreaBySideAndDiagonal(a, d));

    return 0;
}