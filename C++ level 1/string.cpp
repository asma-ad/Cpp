#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1, str2, str3;

    cout << "Please enter string_1: ";
    getline(cin, str1);

    cout << "Please enter string_2 (a number): ";
    cin >> str2;

    cout << "Please enter string_3 (a number): ";
    cin >> str3;

    cout << "***********************************\n";
    cout << "The  length of string_1 is: " << str1.length() << endl;
    cout << "Characters at 0, 2, 4, 7 are: " << str1[0] << str1[2] << str1[4] << str1[7] << endl;
    cout << "Concatenating string_2 and string_3 = " << str2 + str3 << endl;
    cout << stoi(str2) << " * " << stoi(str3) << " = " << stoi(str2) * stoi(str3);

    return 0;
}