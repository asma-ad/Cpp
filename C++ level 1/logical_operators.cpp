#include <iostream>
using namespace std;

int main()
{
    cout << 12 << " >= " << 12 << " is " << (12 >= 12) << endl; // true
    cout << 12 << " > " << 7 << " is " << (12 > 7) << endl;     // true
    cout << 8 << " < " << 6 << " is " << (8 < 6) << endl;       // false
    cout << 8 << " = " << 8 << " is " << (8 == 8) << endl;      // true
    cout << 12 << " <= " << 12 << " is " << (12 <= 12) << endl; // true
    cout << 7 << " = " << 5 << " is " << (7 == 5) << endl;      // false

    cout << "**************************\n";

    cout << "NOT(" << 12 << " >= " << 12 << ") is " << !(12 >= 12) << endl; // false
    cout << "NOT(" << 12 << " < " << 7 << ") is " << !(12 < 7) << endl;     // true
    cout << "NOT(" << 8 << " < " << 6 << ") is " << !(8 < 6) << endl;       // true
    cout << "NOT(" << 8 << " = " << 8 << ") is " << !(8 == 8) << endl;      // false
    cout << "NOT(" << 12 << " <= " << 12 << ") is " << !(12 <= 12) << endl; // false
    cout << "NOT(" << 7 << " = " << 5 << ") is " << !(7 == 5) << endl;      // true

    cout << "**************************\n";

    cout << 1 << " AND " << 1 << " is " << (1 && 1) << endl;            // true
    cout << true << " AND " << 0 << " is " << (true && 0) << endl;      // false
    cout << 0 << " OR " << 1 << " is " << (0 || 1) << endl;             // true
    cout << 0 << " OR " << 0 << " is " << (0 || 0) << endl;             // false
    cout << "NOT " << 0 << " is " << !0 << endl;                        // true
    cout << "NOT(" << 1 << " OR " << 0 << ") is " << !(1 || 0) << endl; // false

    cout << "**************************\n";

    cout << "(7 = 7) and (7 > 5) is " << ((7 == 7) && (7 > 5)) << endl;     // true 1
    cout << "(7 = 7) and (7 < 5) is " << ((7 == 7) && (7 < 5)) << endl;     // false 0
    cout << "(7 = 7) OR (7 < 5) is " << ((7 == 7) || (7 < 5)) << endl;      // true 1
    cout << "(7 < 7) OR (7 > 5) is " << ((7 < 7) || (7 > 5)) << endl;       // true 1
    cout << "NOT(7 = 7) and (7 > 5) is " << !((7 == 7) && (7 > 5)) << endl; // flase 0
    cout << "(7 = 7) and NOT(7 < 5) is " << ((7 == 7) && !(7 < 5)) << endl; // true 1

    cout << "**************************\n";

    cout << "(5 > 6 and 7 = 7) OR (1 or 0) is " << ((5 > 6 && 7 == 7) || (1 || 0)) << endl; // true 1
    cout << "NOT(5 > 6 and 7 = 7) OR (1 or 0) is " << (!(5 > 6 && 7 == 7) || (1 || 0)) << endl; // true 1
    cout << "(5 > 6 and 7 = 7) OR NOT(1 or 0) is " << (!(5 > 6 && 7 == 7) || !(1 || 0)) << endl; // true 1
    cout << "(5 > 6 OR 7 = 7) AND NOT(1 or 0) is " << (!(5 > 6 || 7 == 7) && !(1 || 0)) << endl; // false 0
    cout << "((5 > 6 AND 7 <= 8) OR (8 > 1 AND 4 <= 3)) AND true is " << (((5 > 6 && 7 <= 8) || (8 > 1 && 4 <= 3)) && true) << endl; // false 0
    cout << "((5 > 6 AND NOT(7 <= 8)) AND (8 > 1 OR 4 <= 3)) OR true is " << (((5 > 6 && !(7 <= 8)) &&(8 > 1 || 4 <= 3)) || true) << endl; // true 1

    return 0;
}