#include <iostream>
using namespace std;
/*
    Problem #10:
    Write a program to ask user to enter three marks,
    Then print the average of the entered marks.
*/
void readMark(int marks[3])
{
    cout << "Enter the first mark: ";
    cin >> marks[0];
    cout << "Enter the second mark: ";
    cin >> marks[1];
    cout << "Enter the thirf mark: ";
    cin >> marks[2];
}

int sum(int marks[3])
{
    return marks[0] + marks[1] + marks[2];
}

float average(int marks[3])
{
    return (float)sum(marks) / 3;
}

void printResult(int result)
{
    cout << "The average is: " << result << endl;
}

int main()
{
    int marks[3];
    readMark(marks);
    printResult(average(marks));

    return 0;
}
