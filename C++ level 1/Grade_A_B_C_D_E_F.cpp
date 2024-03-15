#include <iostream>
using namespace std;

void readGrade(float &grade)
{
    cout << "Grade: ";
    cin >> grade;
}

char check_grade(float grade)
{
    if (grade >= 90 && grade <= 100)
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

int main()
{
    float grade;
    readGrade(grade);
    cout << check_grade(grade);

    return 0;
}