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

void readPerson(stPerson person[100], int &length)
{
    cout << "How many people are you?\n";
    cin >> length;

    for (int i = 0; i <= length - 1; i++)
    {
        cout << "\nPlease enter person's " << i + 1 << " info:\n";
        read_info(person[i]);
    }
}

void printPerson(stPerson person[100], int length)
{

    for (int i = 0; i < length; i++)
    {
        cout << "\nPerson's " << i + 1 << " info:";
        print_info(person[i]);
    }
}

int main()
{
    int length;
    stPerson person[100];

    readPerson(person, length);
    printPerson(person, length);

    return 0;
}