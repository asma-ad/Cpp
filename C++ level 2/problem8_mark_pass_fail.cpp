#include <iostream>
using namespace std;
/*
Problem #8:
Write a program to ask user to enter : mark
then print the "Pass" if mark >= 50 , otherwise print "Fail"
*/

enum enPassFail
{
    Pass = 1,
    Fail = 2
};

int readMark()
{
    int mark;
    cout << "Enter your mark: ";
    cin >> mark;
    return mark;
}

enPassFail checkMark(int mark)
{
    if (mark >= 50)
        return enPassFail::Pass;
    else
        return enPassFail::Fail;
}

void printResult(int mark)
{
    if (checkMark(mark) == enPassFail::Pass)
        cout << "Pass\n";
    else
        cout << "Fail\n";
}

int main()
{
    printResult(readMark());
    return 0;
}