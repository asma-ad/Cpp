#include <iostream>
using namespace std;

void print_my_name()
{
    // read name
    string name;
    cout << "Enter your full name: ";
    getline(cin, name);
    // print name
    cout << name << endl;
}

int main()
{
    print_my_name();
    return 0;
}
