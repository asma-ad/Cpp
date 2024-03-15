#include <iostream>
#include <limits>
using namespace std;

int readOnlyNumber()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    while (cin.fail()) /* cin.fail() - returns true when an input failure occurs. In this case it would be an input that is not an integer. If the cin fails then the input buffer is kept in an error state.*/
    {
        cin.clear();
        /*cin.clear() - used to clear the error state of the buffer so that further processing of input can take place. */
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        /*cin.ignore() - used to ignore the rest of the line after the first instance of error that has occurred and it skips to or moves to the next line. */
        cout << "Invalid number\nEnter a valid number: ";
        cin >> number;
    }
    return number;
}

int main()
{
    int number = readOnlyNumber();
    cout << "Your number is: " << number;

    return 0;
}