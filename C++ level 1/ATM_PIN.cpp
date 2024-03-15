#include <iostream>
using namespace std;

void readATMcode(int &code)
{
    cout << "ATM code: ";
    cin >> code;
}

void isValidPIN(int code)
{
    if (code == 1234)
        cout << "Your balance is: " << 7500 << endl;
    else
        cout << "Wrong PIN!" << endl;
}

int main()
{
    int code;
    readATMcode(code);
    isValidPIN(code);

    return 0;
}