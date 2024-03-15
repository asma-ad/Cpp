#include <iostream>
using namespace std;

int main()
{
    float grades[3];

    cout << "Enter grade 1: ";
    cin >> grades[0];
    cout << "Enter grade 2: ";
    cin >> grades[1];
    cout << "Enter grade 3: ";
    cin >> grades[2];

    float avrage = (grades[0] + grades[1] + grades[2]) / 3;

    cout << "The average of grades is: " << avrage << endl;

    return 0;
}