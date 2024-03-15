#include <iostream>
using namespace std;

void readData(int &age, bool &has_driver_license)
{
    cout << "Age: ";
    cin >> age;
    cout << "Driver lecnse (yes = 1 , no = 0): ";
    cin >> has_driver_license;
}

string isHired(int age, bool has_driver_license)
{
    if (age >= 21 && has_driver_license == true)
    {
        return "Hired";
    }
    else
    {
        return "Rejected";
    }
}

int main()
{
    int age;
    bool has_driver_license;

    readData(age, has_driver_license);
    cout << isHired(age, has_driver_license);

    return 0;
}