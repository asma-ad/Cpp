#include <iostream>
using namespace std;
/*
Problem #11:
Write a program to ask user to enter : 3 marks
Then print the average of the entered marks,
and print the "Pass" if mark >= 50 , otherwise print "Fail"
*/

enum enPassFail
{
    Pass = 1,
    Fail = 2
};

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

enPassFail checkAverage(int mark)
{
    if (mark >= 50)
        return enPassFail::Pass;
    else
        return enPassFail::Fail;
}

void printResult(int average)
{
    cout << "The average is: " << average << endl;

    if (checkAverage(average) == enPassFail::Pass)
        cout << "Pass\n";
    else
        cout << "Fail\n";
}

int main()
{
    int marks[3];
    readMark(marks);
    printResult(average(marks));

    return 0;
}