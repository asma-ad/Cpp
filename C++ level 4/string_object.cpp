#include <iostream>
#include <string>
using namespace std;

int main()
{
    // string object functions
    string str = "Hi! This is me, and I'm coding with C++";
    cout << str.length() << endl;
    cout << str.at(4) << endl;
    str.append(" #Work_with_love");
    cout << str << endl;
    str.insert(4, "Hello! ");
    cout << str << endl;
    cout << str.substr(11, 10) << endl;
    str.push_back('$');
    cout << str << endl;
    str.pop_back();
    cout << str << endl;
    cout << str.find("me") << endl;
    cout << str.find("Me") << endl;
    if (str.find("Me") == str.npos)
        cout << "Not found!\n";
    str.clear();
    cout << str << endl;

    return 0;
}