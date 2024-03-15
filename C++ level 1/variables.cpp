#include <iostream>
#include <string>
using namespace std;

int main()
{
     // Homework 1:
     cout << "\n=> Homework 1:\n";

     cout << "Age "
          << "correct" << endl;
     cout << "My-Age "
          << "incorecct" << endl;
     cout << "My_Age "
          << "correct" << endl;
     cout << "_Age "
          << "correct" << endl;
     cout << "2x "
          << "incorecct" << endl;
     cout << "X2 "
          << "correct" << endl;
     cout << "My Name "
          << "incorecct" << endl;
     cout << "MyName "
          << "correct" << endl;
     cout << "#Name "
          << "incorecct" << endl;
     cout << "$Name "
          << "incorecct" << endl;
     cout << "N@me "
          << "incorecct" << endl;
     cout << "int "
          << "incorecct" << endl;
     cout << "for "
          << "incorecct" << endl;

     // Homework 2:
     cout << "\n=> Homework 2:\n";

     string name = "Jaime", city = "New York", Country = "USA";
     char gender = 'F';
     int age = 38;
     float monthly_salary = 5000;
     bool isMarried = true;

     cout << "****************************************" << endl;
     cout << "Name: " << name << endl;
     cout << "Age: " << age << " Years." << endl;
     cout << "City: " << city << endl;
     cout << "Country: " << Country << endl;
     cout << "Monthly salary: " << monthly_salary << endl;
     cout << "Yearly salary: " << monthly_salary * 12 << endl;
     cout << "Gender: " << gender << endl;
     cout << "Married: " << isMarried << endl;
     cout << "****************************************" << endl;

     // Homework 3:
     cout << "\n=> Homework 3:\n";

     int x = 20, y = 30, z = 10;
     cout << x << " +" << endl;
     cout << y << " +" << endl;
     cout << z << endl;
     cout << "---------------" << endl;
     cout << "Total = " << x + y + z << endl;

     // Homework 4:
     cout << "\n=> Homework 4:\n";

     int _age = 25;
     cout << "After 5 years you will be " << _age + 5 << " years old.\n";

     return 0;
}