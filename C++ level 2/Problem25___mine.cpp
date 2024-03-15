#include <iostream>
using namespace std;
/*
Problem #25:
Write a program to ask user to enter : age
if age is between 18 & 45 print "Valid age",
otherwise re-ask user to enter a valid age.
*/

int readAgeBetween18and45(int from, int to)
{
    int age;

    do
    {
        cout << "Enter age between 18 & 45: ";
        cin >> age;
    } while (age < from || age > to);

    return age;
}

void printResult(int age)
{
    cout << age << " is a valid age." << endl;
}

int main()
{
    printResult(readAgeBetween18and45(18, 45));
    return 0;
}