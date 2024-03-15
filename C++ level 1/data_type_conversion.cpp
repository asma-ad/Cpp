#include <iostream>
#include <string>
using namespace std;

int main()
{
    // convert string st1 = "43.22" to double, float, and int.
    string st1 = "43.22";
    double numDouble = stod(st1);
    float numFloat = stof(st1);
    int numInt = stoi(st1);

    cout << "numDouble = " << numDouble << endl;
    cout << "numFloat = " << numFloat << endl;
    cout << "numInt = " << numInt << endl;

    cout << "\n****************************\n";

    // Convert integer N1 = 20 to string
    int N1 = 20;
    string str = to_string(N1);
    cout << "Integer to string: " << str << endl;

    cout << "\n****************************\n";

    // Convert double N2 = 33.5 to string
    double N2 = 33.5;
    string str2 = to_string(N2);
    cout << "Double to string: " << str2 << endl;

    cout << "\n****************************\n";

    // Convert float N3 = 55.23 to string, and integer
    float N3 = 55.23;
    string str3 = to_string(N3);
    cout << "Float to string: " << str3 << endl;

    return 0;
}