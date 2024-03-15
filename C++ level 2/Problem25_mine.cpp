#include <iostream>
using namespace std;
/*
Problem #25:
Write a program to ask user to enter : age
if age is between 18 & 45 print "Valid age",
otherwise print "Invalid age" and re-ask user to enter a valid age.
*/

int readAge()
{
    int age;
    cout << "Enter age between 18 & 45: ";
    cin >> age;
    return age;
}

int untilValidAgeInRange(int from, int to)
{
    short age = readAge();

    while (age < from || age > to)
    {
        cout << age << " is invalide age\n";
        age = readAge();
    };

    return age;
}

void printResult(int age)
{
    cout << age << " is a valid age." << endl;
}

int main()
{
    printResult(untilValidAgeInRange(18, 45));
    return 0;
}