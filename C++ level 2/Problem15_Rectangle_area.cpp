#include <iostream>
using namespace std;
/*
Problem #15:
Write a program to calculate rectangle area and print it on the screen.
*/

void readValues(float &a, float &b)
{
    cout << "Enter A: ";
    cin >> a;
    cout << "Enter B: ";
    cin >> b;
}

float area_rectangle(float a, float b)
{
    return a * b;
}

void printResult(float area)
{
    cout << "\nRectangle area = " << area << endl;
}

int main()
{
    float a, b;
    readValues(a, b);
    printResult(area_rectangle(a, b));

    return 0;
}