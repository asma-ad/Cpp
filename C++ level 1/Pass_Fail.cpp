#include <iostream>
using namespace std;

void readData(float &mark)
{
    cout << "Mark: ";
    cin >> mark;
}

string isPass(float mark)
{
    if (mark >= 50)
    {
        return "Pass";
    }
    else
    {
        return "Fail";
    }
}

int main()
{
    float mark;

    readData(mark);
    cout << isPass(mark);

    return 0;
}