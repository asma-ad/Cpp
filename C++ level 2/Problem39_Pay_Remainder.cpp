#include <iostream>
using namespace std;
/*
Problem #39
Write a program to read a TotalBill and CashPaid,
then calculate the remainder to be paid back.
*/

float readPositiveNumber(string message)
{
    int number = 0;

    do
    {
        cout << message;
        cin >> number;
    } while (number < 0);

    return number;
}

float calculateRemainder(float total_bill, float cash_paid)
{
    return cash_paid - total_bill;
}

int main()
{
    float total_bill = readPositiveNumber("Enter total bill: ");
    float cash_paid = readPositiveNumber("Enter cash paid: ");

    cout << calculateRemainder(total_bill, cash_paid);

    return 0;
}