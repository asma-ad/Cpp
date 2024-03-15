#include <iostream>
using namespace std;
/*
Problem #25:
Write a program to ask user to enter : age
if age is between 18 & 45 print "Valid age",
otherwise re-ask user to enter a valid age.
*/

int readAge()
{
    int age;
    cout << "Enter age between 18 & 45: ";
    cin >> age;
    return age;
}

bool validAgeInRange(int age, int from, int to)
{
    return (age >= from && age <= to);
}

int readUntilAgrValidated(int from, int to)
{
    int age = 0;

    do
    {
        age = readAge();
    } while (!validAgeInRange(age, from, to));

    return age;
}

void printResult(int age)
{
    cout << age << " Valid age." << endl;
}

int main()
{
    printResult(readUntilAgrValidated(18, 45));
    return 0;
}