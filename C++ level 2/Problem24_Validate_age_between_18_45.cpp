#include <iostream>
using namespace std;
/*
Problem #24:
Write a program to ask user to enter : age
if age is between 18 & 45 print "Valid age", otherwise print "Invalid age"
*/

int readAge()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    return age;
}

bool validAgeInRange(int age, int from, int to)
{
    return (age >= from && age <= to);
}

void printResult(int age)
{
    if (validAgeInRange(age, 18, 45))
        cout << age << " Valid age." << endl;
    else
        cout << age << " Invalid age." << endl;
}

int main()
{
    printResult(readAge());
    return 0;
}