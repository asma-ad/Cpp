#include <iostream>
using namespace std;
/*
Problem #48
Write a program to read a LoanAmount and ask you how many months you need to settle the loan,
then calculate the monthly installment amount.
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

float monthlyInstallment(float loan_amount, float total_months)
{
    return loan_amount / total_months;
}

int main()
{
    float loan_amount = readPositiveNumber("Enter Loan amount, please: ");
    float total_months = readPositiveNumber("How many months? ");

    cout << "Monthly istallment = " << monthlyInstallment(loan_amount, total_months) << endl;

    return 0;
}