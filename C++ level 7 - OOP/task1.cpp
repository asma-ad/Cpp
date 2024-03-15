#include <iostream>
using namespace std;

class Cal
{
private:
    int n1, n2;

public:
    // default constructor
    Cal()
    {
        cout << "Enter n1: ";
        cin >> n1;
        cout << "Enter n2: ";
        cin >> n2;
    }
    // parameterzied constructor
    Cal(int x, int y)
    {
        n1 = x;
        n2 = y;
    }

    int sum()
    {
        return (n1 + n2);
    }
    float divide()
    {
        return (n1 / n2);
    }
    int mod()
    {
        return (n1 % n2);
    }
    int mult()
    {
        return (n1 * n2);
    }
};

int main()
{
    Cal operation1;       // default
    Cal operation2(1, 2); // parameterized
    cout << "Sum = " << operation1.sum() << endl;
    cout << "Mult = " << operation1.mult() << endl;

    return 0;
}
