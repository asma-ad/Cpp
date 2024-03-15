#include <iostream>
using namespace std;

enum enGender {Male, Female};
enum enStatus {Single, Married, Divorced};
enum enColor {Black, Green, White, Red, Pink, Blue, Brown};

struct stUser
{
    string name;
    string city;
    string country;
    int age;
    float monthly_salary;
};

int main()
{
    stUser user;

    user.name = "Alex";
    user.city = "London";
    user.country = "United kingdom";
    user.age = 38;
    user.monthly_salary = 5000;
    enGender gender = enGender::Female;
    enStatus status = enStatus::Single;
    enColor color = enColor::Pink;

    cout << "****************************************" << endl;
    cout << "Name: " << user.name << endl;
    cout << "Age: " << user.age << " Years old." << endl;
    cout << "City: " << user.city << endl;
    cout << "Country: " << user.country << endl;
    cout << "Monthly salary: " << user.monthly_salary << endl;
    cout << "Yearly salary: " << user.monthly_salary * 12 << endl;
    cout << "Gender: " << gender << endl;
    cout << "Married: " << status << endl;
    cout << "Favorite color: " << color << endl;
    cout << "****************************************" << endl;

    return 0;
}