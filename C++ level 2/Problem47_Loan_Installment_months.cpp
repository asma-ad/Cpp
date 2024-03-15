#include <iostream>
using namespace std;
/*
Problem #47
Write a program to read a LoanAmount and Monthly Payment
and calculate how many months you need to settle the loan.
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

float totalMonths(float loan_amount, float monthly_installment)
{
    return loan_amount / monthly_installment;
}

int main()
{
    float loan_amount = readPositiveNumber("Enter Loan amount please: ");
    float monthly_installment = readPositiveNumber("Enter monthly installment please: ");

    cout << "Total months to pay = " << totalMonths(loan_amount, monthly_installment) << endl;

    return 0;
}