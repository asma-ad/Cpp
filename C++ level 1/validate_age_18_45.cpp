#include <iostream>
using namespace std;

void read_age(int &age)
{
    cout << "Age: ";
    cin >> age;
}

string isValidAge(int age)
{
    if (age >= 18 && age <= 45)
        return "Valid age!";
    else
        return "Invalid age!";
}

int main()
{
    int age;
    read_age(age);
    cout << isValidAge(age) << endl;

    return 0;
}