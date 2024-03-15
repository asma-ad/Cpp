#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> number;

    // Adds a new element at the end of the vector
    number.push_back(10);
    number.push_back(20);
    number.push_back(30);
    number.push_back(40);

    cout << number.front() << endl;    // Access first element
    cout << number.back() << endl;     // Access last element
    cout << number.size() << endl;     // Return size / how many elements are there
    cout << number.capacity() << endl; // Return size of allocated storage capacity / overall size

    number.pop_back();              // Remove elements from a vector from the back (40)
    number.clear();                 // clear content
    cout << number.empty() << endl; // check if the vector container is empty or not

    return 0;
}