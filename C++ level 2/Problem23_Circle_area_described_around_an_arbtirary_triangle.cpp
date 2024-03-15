#include <iostream>
#include <cmath>
using namespace std;
/*
Problem #23:
Write a program to calculate circle area described around an arbitrary traingle,
then print it on the screen.
*/

const float PI = 3.141592653589793238;

void readTriangle(float &a, float &b, float &c)
{
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;
}

float CircleAreaInscribedIsoscelesTriangle(float a, float b, float c)
{
    float p = (a + b + c) / 2;
    return PI * pow(((a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)))), 2);
}

void printResult(float area)
{
    cout << "\nRectangle area = " << area << endl;
}

int main()
{
    float a, b, c;
    readTriangle(a, b, c);
    printResult(CircleAreaInscribedIsoscelesTriangle(a, b, c));

    return 0;
}