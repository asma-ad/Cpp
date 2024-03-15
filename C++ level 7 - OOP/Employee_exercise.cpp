#include <iostream>
using namespace std;

class clsEmployee
{
private:
    int _ID;
    string _firstName;
    string _lastName;
    string _title;
    string _email;
    int _phone;
    float _salary;
    string _department;

public:
    // parametrized constructor
    clsEmployee(int id, string firstName, string lastName, string title, string email, int phone, float salary, string department)
    {
        _ID = id;
        _firstName = firstName;
        _lastName = lastName;
        _title = title;
        _email = email;
        _phone = phone;
        _salary = salary;
        _department = department;
    }
    // read ID
    int ID()
    {
        return _ID;
    }
    // setters and getters

    // first name
    void setFirstName(string firstName)
    {
        _firstName = firstName;
    }
    string firstName()
    {
        return _firstName;
    }

    // last name
    void setLastName(string lastName)
    {
        _lastName = lastName;
    }
    string lastName()
    {
        return _lastName;
    }

    // title
    void setTitle(string title)
    {
        _title = title;
    }
    string title()
    {
        return _title;
    }

    // email
    void setEmail(string email)
    {
        _email = email;
    }
    string email()
    {
        return _email;
    }

    // phone
    void setPhone(int phone)
    {
        _phone = phone;
    }
    int phone()
    {
        return _phone;
    }
    // salary
    void setSalary(float salary)
    {
        _salary = salary;
    }
    float salary()
    {
        return _salary;
    }
    // deparment
    void setDepartment(string department)
    {
        _department = department;
    }
    string department()
    {
        return _department;
    }
    // get fullName
    string fullName()
    {
        return _firstName + " " + _lastName;
    }

    // print info
    void print()
    {
        cout << "\nInfo:\n";
        cout << "-----------------------\n";
        cout << "ID : " << _ID << endl;
        cout << "First name: " << _firstName << endl;
        cout << "Last name: " << _lastName << endl;
        cout << "Full name: " << fullName() << endl;
        cout << "Title: " << _title << endl;
        cout << "Department: " << _department << endl;
        cout << "Salary: " << _salary << endl;
        cout << "Email: " << _email << endl;
        cout << "Phone: " << _phone << endl;
        cout << "-----------------------\n";
    }

    // send email
    void sendEmail(string subject, string body)
    {
        cout << "\nThe following message sent successfully to email: " << _email << endl;
        cout << "Subject: " << subject << endl;
        cout << "Body: " << body << endl;
    }

    // send SMS
    void sendSMS(string text)
    {
        cout << "\nThe following message sent successfully to : " << _phone << endl;
        cout << text << endl;
    }
};

int main()
{
    clsEmployee employee1(123, "Sarah", "Ghadeer", "Programmer", "mail@mail", 665544, 1452, "Software engineering");
    employee1.print();

    employee1.sendEmail("Hi!", "Let's code!");
    employee1.sendSMS("SMS message!");

    return 0;
}