// how to initiate an inner-class using a constructor?
#include <iostream>
using namespace std;

// Enclosing class
class clsPerson
{
    string _FullName;
    int _Id;

    // inner class
    class clsAddress
    {
    private:
        string _AddressLine1;
        string _AddressLine2;
        string _City;
        string _Country;

    public:
        // constructor
        clsAddress(string AddressLine1, string AddressLine2, string City, string Country)
        {
            _AddressLine1 = AddressLine1;
            _AddressLine2 = AddressLine2;
            _City = City;
            _Country = Country;
        }

        // getters & setters
        void setAddressLine1(string AddressLine1)
        {
            _AddressLine1 = AddressLine1;
        }
        string AddressLine1()
        {
            return _AddressLine1;
        }

        void setAddressLine2(string AddressLine2)
        {
            _AddressLine2 = AddressLine2;
        }
        string AddressLine2()
        {
            return _AddressLine2;
        }

        void setCity(string City)
        {
            _City = City;
        }
        string City()
        {
            return _City;
        }

        void setCountry(string Country)
        {
            _Country = Country;
        }
        string Country()
        {
            return _Country;
        }

        // print Address
        void Print()
        {
            cout << "\nAddress:\n";
            cout << _AddressLine1 << endl;
            cout << _AddressLine2 << endl;
            cout << _City << endl;
            cout << _Country << endl;
        }
    };

public:
    // setters & getters
    void setFullName(string FullName)
    {
        _FullName = FullName;
    }
    string FullName()
    {
        return _FullName;
    }

    int ID()
    {
        return _Id;
    }

    // initialize address object, and pass empty strings as arguments to its constructor
    clsAddress Address = clsAddress("", "", "", "");

    // Constructor
    clsPerson(int ID, string FullName, string AddressLine1, string AddressLine2, string City, string Country)
    {
        _FullName = FullName;
        _Id = ID;

        // initiate address class by its constructor
        Address = clsAddress(AddressLine1, AddressLine2, City, Country);
    }
};

int main()

{

    clsPerson person1(123, "Jane Joe", "ABS Building", "JJJ Street", "London", "United Kingdom");
    person1.Address.Print();

    system("pause>0");
    return 0;
}