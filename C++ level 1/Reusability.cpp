#include <iostream>
using namespace std;

struct stPreson
{
    string name;
    int age;
    string city;
    string country;
    float monthly_salary;
    string gender;
    bool status;
};

void readInfo(stPreson &info)
{
    cout << "Name: ";
    cin >> info.name;

    cout << "Age: ";
    cin >> info.age;

    cout << "Country: ";
    cin >> info.country;

    cout << "City: ";
    cin >> info.city;

    cout << "Gender: ";
    cin >> info.gender;

    cout << "Married? (Yes = 1, No = 0): ";
    cin >> info.status;

    cout << "Monthly salary: ";
    cin >> info.monthly_salary;
}

void printInfo(stPreson info)
{

    cout << "\n****************************************" << endl;

    cout << "Name: " << info.name << endl;
    cout << "Age: " << info.age << " Years." << endl;
    cout << "City: " << info.city << endl;
    cout << "Country: " << info.country << endl;
    cout << "Monthly salary: " << info.monthly_salary << endl;
    cout << "Yearly salary: " << info.monthly_salary * 12 << endl;
    cout << "Gender: " << info.gender << endl;
    cout << "Married: " << info.status << endl;

    cout << "****************************************" << endl;
}

int main()
{
    stPreson person1;
    readInfo(person1);
    printInfo(person1);

    stPreson person2;
    readInfo(person2);
    printInfo(person2);

    stPreson person3;
    readInfo(person3);
    printInfo(person3);

    return 0;
}