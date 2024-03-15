#include <iostream>
using namespace std;
/*
Problem #40
A restaurant charges 10% services fee and 16% sales tax.

Write a program to read a BillValue,
then  add service fee and sales tax to it,
then print the TotalBill on the screen.
*/

float readPositiveNumber(string message)
{
    float number = 0;

    do
    {
        cout << message;
        cin >> number;
    } while (number < 0);

    return number;
}

float calculateFeeTax(float bill)
{
    return bill * 1.1 * 1.16;
}

int main()
{
    float total_bill = readPositiveNumber("Enter Bill value: ");

    cout << endl
         << "Total bill = " << total_bill << endl;
    cout << "Total bill with \"service fee\" and \"sales tax\" = " << calculateFeeTax(total_bill) << endl;

    return 0;
}