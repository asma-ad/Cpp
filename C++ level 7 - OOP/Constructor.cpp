#include <iostream>
using namespace std;

class clsStudent
{
private:
    string _name;
    int _age;
    int _id;
    string _major;

public:
    // constructor
    clsStudent(string name, int age, int ID, string major)
    {
        _name = name;
        _age = age;
        _id = ID;
        _major = major;
    }
    // copy constructor
    clsStudent(clsStudent &obj)
    {
        _name = obj.Name();
        _age = obj.Age();
        _id = obj.ID();
        _major = obj.Major();
    }

    // set and get methods
    void setName(string name)
    {
        _name = name;
    }
    string Name()
    {
        return _name;
    }

    void setAge(int age)
    {
        _age = age;
    }
    int Age()
    {
        return _age;
    }

    void setID(int id)
    {
        _id = id;
    }
    int ID()
    {
        return _id;
    }

    void setMajor(string major)
    {
        _major = major;
    }
    string Major()
    {
        return _major;
    }

    void print()
    {
        cout << "------------------------------\n";
        cout << "\tStudent card\n";
        cout << "------------------------------\n";
        cout << "Name: " << _name << endl;
        cout << "Age: " << _age << endl;
        cout << "ID: " << _id << endl;
        cout << "Major: " << _major << endl;
        cout << "------------------------------\n";
    }

    // Destructor
    ~clsStudent()
    {
        cout << "This is a destructor!\n";
    }
};

int main()
{
    system("cls");

    clsStudent studen1("Asma", 20, 110, "Software engineering");
    studen1.print();

    clsStudent student2 = studen1;
    student2.print();

    return 0;
}