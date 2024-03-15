#include <iostream>
#include <cmath>
using namespace std;
/*
Problem #22:
Write a program to calculate circle area inscribed in an isosceles traingle,
then print it on the screen.
*/

const float PI = 3.141592653589793238;

void readTriangle(float &a, float &b)
{
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
}

float CircleAreaInscribedIsoscelesTriangle(float a, float b)
{
    return PI * (pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));
}

void printResult(float area)
{
    cout << "\nRectangle area = " << area << endl;
}

int main()
{
    float a, b;
    readTriangle(a, b);
    printResult(CircleAreaInscribedIsoscelesTriangle(a, b));

    return 0;
}