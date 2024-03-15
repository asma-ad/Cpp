#include <iostream>
using namespace std;
/*
    Problem #10:
    Write a program to ask user to enter three marks,
    Then print the average of the entered marks.
*/
void readMark(int &mark1, int &mark2, int &mark3)
{
    cout << "Enter the first mark: ";
    cin >> mark1;
    cout << "Enter the second mark: ";
    cin >> mark2;
    cout << "Enter the thirf mark: ";
    cin >> mark3;
}

int sum(int mark1, int mark2, int mark3)
{
    return mark1 + mark2 + mark3;
}

float average(int mark1, int mark2, int mark3)
{
    return (float)sum(mark1, mark2, mark3) / 3;
}

void printResult(int result)
{
    cout << "The average is: " << result << endl;
}

int main()
{
    int mark1, mark2, mark3;
    readMark(mark1, mark2, mark3);
    printResult(average(mark1, mark2, mark3));

    return 0;
}
