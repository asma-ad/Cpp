#include <iostream>
using namespace std;

int main()
{
    // '\n' or 'endl' ?
    cout << "The difference between \\n and endl:\n";
    cout << "'endl' causes a flushing of the output buffer every time it is called, whereas '\\n' does not." << endl;

    return 0;
}