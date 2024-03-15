#include <iostream>
using namespace std;
/*
Problem #33:
Write a program to ask user to enter Grade,
then print the grade as following:
90 - 100 => Print A
80 - 89 => Print B
70 - 79 => Print C
60 - 69 => Print D
50 - 59 => Print E
Otherwise Print F
*/

float readNumberInRange(int from, int to)
{
    float grade;
    do
    {
        cout << "Enter the grade: ";
        cin >> grade;
    } while (grade < from || grade > to);

    return grade;
}

char getGradeLetter(float grade)
{
    if (grade >= 90)
        return 'A';
    else if (grade >= 80)
        return 'B';
    else if (grade >= 70)
        return 'C';
    else if (grade >= 60)
        return 'D';
    else if (grade >= 50)
        return 'E';
    else
        return 'F';
}

void printResult(char result)
{
    cout << result << endl;
}

int main()
{
    printResult(getGradeLetter(readNumberInRange(0, 100)));
    return 0;
}