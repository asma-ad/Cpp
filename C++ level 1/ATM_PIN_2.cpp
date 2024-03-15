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
    {
        int i = 1;
        while (i < 3)
        {
            cout << "Wrong PIN!" << endl;
            cout << "ATM code: ";
            cin >> code;
            i++;
        }
        cout << "Card locked!\nYou entered PIN code 3 time. ";
    }
}

int main()
{
    int code;
    readATMcode(code);
    isValidPIN(code);

    return 0;
}