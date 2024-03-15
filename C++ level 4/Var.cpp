#include <iostream>
using namespace std;

// Static var, Automatic var, Register var

void likes()
{
    static int like = 0;
    cout << "The number of likes is : " << like << endl;
    like++;
}

int main()
{
    likes(); // 0
    likes(); // 1
    likes(); // 2
    likes(); // 3

    // ----> Automatic var

    auto a = 11;
    auto b = "Coding";
    auto c = 13.25;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    return 0;
}