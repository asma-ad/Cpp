#include <iostream>
using namespace std;

struct user_address
{
    int phone_number;
    string street_name;
    int code_zip;
};

struct users
{
    string name;
    int age;
    string country;
    string city;
    bool isMarried;
    char gender;
    float month_salary;
    float yearly_salary;
    user_address address;
};

int main()
{
    users user1;

    cout << "Name: ";
    cin >> user1.name;

    cout << "Age: ";
    cin >> user1.age;

    cout << "Country: ";
    cin >> user1.country;

    cout << "City: ";
    cin >> user1.city;

    cout << "Street name: ";
    cin >> user1.address.street_name;

    cout << "Code zip: ";
    cin >> user1.address.code_zip;

    cout << "Phone number: ";
    cin >> user1.address.phone_number;

    cout << "Gender: ";
    cin >> user1.gender;

    cout << "Married? (Yes = 1, No = 0): ";
    cin >> user1.isMarried;

    cout << "Monthly salary: ";
    cin >> user1.month_salary;

    cout << "Yearly salary: ";
    cin >> user1.yearly_salary;

    cout << "**********************\n"
         << "Done!\nThank you for sign up.\n"
         << "**********************\n";

    return 0;
}