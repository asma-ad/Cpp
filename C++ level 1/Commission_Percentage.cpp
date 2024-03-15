#include <iostream>
using namespace std;

void readTotalSales(float &total_sales)
{
    cout << "Total sales: ";
    cin >> total_sales;
}

float Commission_Percentage(float total_sales)
{
    if (total_sales >= 1000000)
        return total_sales * 0.01;
    else if (total_sales >= 500000)
        return total_sales * 0.02;
    else if (total_sales >= 100000)
        return total_sales * 0.03;
    else if (total_sales >= 50000)
        return total_sales * 0.05;
    else
        return total_sales * 0;
}

int main()
{
    float total_sales;
    readTotalSales(total_sales);
    cout << Commission_Percentage(total_sales);

    return 0;
}