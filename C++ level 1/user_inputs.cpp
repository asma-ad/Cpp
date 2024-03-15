#include <iostream>
using namespace std;

int main()
{
    string name, city, country;
    char gender;
    int age;
    float monthly_salary;
    bool isMarried;

    cout << "Enter you name, please: ";
    cin >> name;

    cout << "Enter you age, please: ";
    cin >> age;

    cout << "Enter you city, please: ";
    cin >> city;

    cout << "Enter you country, please: ";
    cin >> country;

    cout << "Enter you monthly salary, please: ";
    cin >> monthly_salary;

    cout << "Enter you gender (F, M), please: ";
    cin >> gender;

    cout << "are you married? (yes = 1, No = 0) ";
    cin >> isMarried;

    cout << "\n\n****************************************" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << " Years." << endl;
    cout << "City: " << city << endl;
    cout << "Country: " << country << endl;
    cout << "Monthly salary: " << monthly_salary << endl;
    cout << "Yearly salary: " << monthly_salary * 12 << endl;
    cout << "Gender: " << gender << endl;
    cout << "Married: " << isMarried << endl;
    cout << "****************************************" << endl;

    return 0;
}