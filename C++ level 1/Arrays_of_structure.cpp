#include <iostream>
using namespace std;

struct stPerson
{
    string first_name;
    string last_name;
    int age;
    int phone_number;
};

void read_info(stPerson &info)
{
    cout << "First name: " << endl;
    cin >> info.first_name;
    cout << "Last name: " << endl;
    cin >> info.last_name;
    cout << "Age: " << endl;
    cin >> info.age;
    cout << "Phone number: " << endl;
    cin >> info.phone_number;
}

void print_info(stPerson info)
{
    cout << "\n**********************************\n";

    cout << "First name: " << info.first_name << endl;
    cout << "Last name: " << info.last_name << endl;
    cout << "Age: " << info.age << endl;
    cout << "Phone number: " << info.phone_number << endl;

    cout << "**********************************\n";
}

void readPerson(stPerson person[2])
{
    read_info(person[0]);
    read_info(person[1]);
}

void printPerson(stPerson person[2])
{
    cout << "********************\n";

    print_info(person[0]);
    print_info(person[1]);
}

int main()
{
    stPerson person[2];
    readPerson(person);
    printPerson(person);

    return 0;
}