#include <iostream>
using namespace std;

struct stStudent
{
    int number;
    string name;
};

int main()
{
    stStudent student1, *ptr;

    student1.name = "Asma";
    student1.number = 123;

    cout << "\nWithout ptr\n";
    cout << "Name   : " << student1.name << "\n";
    cout << "Number : " << student1.number << "\n";

    ptr = &student1;

    cout << "\nWith ptr\n";
    // To get the value of a struct : p->struct
    // To get the address of a struct : &(p->struct)
    cout << "Name   : " << ptr->name << "\n";
    cout << "Number : " << ptr->number << "\n";

    return 0;
}