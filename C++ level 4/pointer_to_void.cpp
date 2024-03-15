#include <iostream>
using namespace std;

int main()
{
    char c = 'A';
    void *p;
    p = &c;

    cout << c << endl;
    cout << *(static_cast<char *>(p)) << endl;

    return 0;
}