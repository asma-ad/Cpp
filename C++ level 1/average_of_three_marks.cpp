#include <iostream>
using namespace std;

int main()
{
    float mark1, mark2, mark3;
    cout << "Enter first mark: ";
    cin >> mark1;
    cout << "Enter second mark: ";
    cin >> mark2;
    cout << "Enter third mark: ";
    cin >> mark3;

    float average = (mark1 + mark2 + mark3) / 3;
    cout << average << endl;
    return 0;
}