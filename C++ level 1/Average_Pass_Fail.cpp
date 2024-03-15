#include <iostream>
using namespace std;

void readData(float mark[3])
{
    cout << "Mark 1: ";
    cin >> mark[0];
    cout << "Mark 2: ";
    cin >> mark[1];
    cout << "Mark 3: ";
    cin >> mark[2];
}

float average(float mark[3])
{
    return (mark[0] + mark[1] + mark[2]) / 3;
}

string isPass(float averageResult)
{
    if (averageResult >= 50)
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
    float mark[3];

    readData(mark);

    cout << average(mark) << endl;

    float averageResult = average(mark);
    cout << isPass(averageResult);

    return 0;
}