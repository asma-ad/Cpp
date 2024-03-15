#include <iostream>
using namespace std;

int main()
{
    // Pay Remainder
    float total_bill, cash_paid;
    cout << "Total bill: ";
    cin >> total_bill;
    cout << "Cash paid: ";
    cin >> cash_paid;

    cout << cash_paid - total_bill << endl;

    return 0;
}