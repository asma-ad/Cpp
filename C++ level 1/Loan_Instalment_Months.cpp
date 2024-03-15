#include <iostream>
using namespace std;

int main()
{
    // Loan Instalment Months
    int loan_amount, monthly_payment;
    cout << "Loan amount: ";
    cin >> loan_amount;
    cout << "Monthly payment: ";
    cin >> monthly_payment;

    int total_months = loan_amount / monthly_payment;
    cout << total_months << " Months" << endl;

    return 0;
}