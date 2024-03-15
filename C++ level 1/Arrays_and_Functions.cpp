#include <iostream>
using namespace std;

void readGrades(float grades[3])
{
    cout << "Enter grade 1: ";
    cin >> grades[0];
    cout << "Enter grade 2: ";
    cin >> grades[1];
    cout << "Enter grade 3: ";
    cin >> grades[2];
}

float average(float grades[3])
{
    return (grades[0] + grades[1] + grades[2]) / 3;
}

int main()
{
    float grades[3];
    readGrades(grades);
    cout << "The average of grades is: " << average(grades) << endl;

    return 0;
}