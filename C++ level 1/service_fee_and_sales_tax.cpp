#include <iostream>
using namespace std;
/*
    Service Fee and Sales Tax
    A restautant charges 10% services and 16% sales tax.
*/

int main()
{
    float bill_value;
    cout << "Enter bill value: ";
    cin >> bill_value;

    float total_bill = bill_value * 1.1 * 1.16; // 1.1 = 10% and 1.16 = 16%
    cout << total_bill;

    return 0;
}