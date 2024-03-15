#include <iostream>
#include <cmath>
using namespace std;
/*
Problem #20:
Write a program to calculate circle area inscribed in a square,
then print it on the screen.
*/

const float PI = 3.141592653589793238;

float readSauqreSide()
{
    float a;
    cout << "Enter a (square side): ";
    cin >> a;
    return a;
}

float circleAreaInscribedInSquare(float a)
{
    // return PI * (pow((a / 2), 2));
    return (PI * pow(a, 2)) / 4;
}

void printResult(float area)
{
    cout << "\nRectangle area = " << area << endl;
}

int main()
{
    printResult(circleAreaInscribedInSquare(readSauqreSide()));

    return 0;
}