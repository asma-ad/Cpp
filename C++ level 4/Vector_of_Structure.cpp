#include <iostream>
#include <vector>
using namespace std;

struct stEmployees
{
    string firstname;
    string lastname;
    int age;
    float salary;
};

void readEmployeeData(vector<stEmployees> &vEmployee)
{
    stEmployees employee;
    char readAgain = 'Y';
    while (readAgain == 'y' || readAgain == 'Y')
    {
        cout << "\nFirst name: ";
        cin >> employee.firstname;
        cout << "Last name: ";
        cin >> employee.lastname;
        cout << "Aga: ";
        cin >> employee.age;
        cout << "Salary: ";
        cin >> employee.salary;
        vEmployee.push_back(employee);

        cout << "Do you want to add more employees (Y/N)? ";
        cin >> readAgain;
    }
}

void printEmployeeData(vector<stEmployees> &vEmployee)
{
    cout << "\nEmployees Vector: \n\n";
    for (stEmployees &employee : vEmployee)
    {
        cout << "First name : " << employee.firstname << "\n";
        cout << "Last name : " << employee.lastname << "\n";
        cout << "Age : " << employee.age << "\n";
        cout << "Salary : " << employee.salary << "\n";
        cout << "\n\n";
    }
}

int main()
{
    vector<stEmployees> vEmployee;
    readEmployeeData(vEmployee);
    printEmployeeData(vEmployee);
    return 0;
}