#include <iostream>
using namespace std;
/*
Create a struct called Person with the following properties:
name (string)
age (integer)
isStudent (boolean)

Create a few instances of the Person struct and print out their details.
*/

struct Person
{
    string name;
    int age;
    bool isStudent;
};

int main()
{
    Person person1, person2, person3;

    person1.name = "Mohammed";
    person1.age = 27;
    person1.isStudent = true;

    cout << "=> Person 1:\n";
    cout << "******************************\n";
    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << endl;
    cout << "isStudent: " << person1.isStudent << endl;
    cout << "******************************\n\n";

    person2.name = "Alex";
    person2.age = 31;
    person2.isStudent = true;

    cout << "=> Person 2:\n";
    cout << "******************************\n";
    cout << "Name: " << person2.name << endl;
    cout << "Age: " << person2.age << endl;
    cout << "isStudent: " << person2.isStudent << endl;
    cout << "******************************\n\n";

    person3.name = "Salma";
    person3.age = 18;
    person3.isStudent = false;

    cout << "=> Person 3:\n";
    cout << "******************************\n";
    cout << "Name: " << person3.name << endl;
    cout << "Age: " << person3.age << endl;
    cout << "isStudent: " << person3.isStudent << endl;
    cout << "******************************\n\n";

    return 0;
}