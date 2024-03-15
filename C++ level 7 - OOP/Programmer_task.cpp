#include <iostream>
using namespace std;

// SuperClass
class clsPerson
{
private:
    int _ID;
    string _firstName;
    string _lastName;
    string _email;
    int _phone;

public:
    // parametrized constructor
    clsPerson(int id, string firstName, string lastName, string email, int phone)
    {
        _ID = id;
        _firstName = firstName;
        _lastName = lastName;
        _email = email;
        _phone = phone;
    }

    // read only property
    int ID()
    {
        return _ID;
    }
    // setters and getters
    void setFirstName(string firstName)
    {
        _firstName = firstName;
    }
    string firstName()
    {
        return _firstName;
    }

    void setLastName(string lastName)
    {
        _lastName = lastName;
    }
    string lastName()
    {
        return _lastName;
    }

    void setEmail(string email)
    {
        _email = email;
    }
    string email()
    {
        return _email;
    }

    void setPhone(int phone)
    {
        _phone = phone;
    }
    int phone()
    {
        return _phone;
    }

    // get fullName
    string fullName()
    {
        return _firstName + " " + _lastName;
    }

    // disply info
    void print()
    {
        cout << "\nInfo:\n";
        cout << "-----------------------\n";
        cout << "ID : " << _ID << endl;
        cout << "First name: " << _firstName << endl;
        cout << "Last name: " << _lastName << endl;
        cout << "Full name: " << fullName() << endl;
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

// Sub Class - Derived Class
class clsEmployee : public clsPerson
{
private:
    string _title;
    string _department;
    float _salary;

public:
    // constructor
    clsEmployee(int id, string firstName, string lastName, string email, int phone, string title, string department, float salary) : clsPerson(id, firstName, lastName, email, phone)
    {
        _department = department;
        _title = title;
        _salary = salary;
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

    // function overriding - print
    void print()
    {
        cout << "\nInfo:\n";
        cout << "-----------------------\n";
        cout << "ID         : " << ID() << endl;
        cout << "First name : " << firstName() << endl;
        cout << "Last name  : " << lastName() << endl;
        cout << "Full name  : " << fullName() << endl;
        cout << "Email      : " << email() << endl;
        cout << "Phone      : " << phone() << endl;
        cout << "Department : " << _department << endl;
        cout << "Title      : " << _title << endl;
        cout << "Salary     : " << _salary << endl;
        cout << "-----------------------\n";
    }
};

// Sub Class - Derived Class
class clsProgrammer : public clsEmployee
{
private:
    string _mainProgrammingLanguage;

public:
    // constructor
    clsProgrammer(int id, string firstName, string lastName, string email, int phone, string title, string department, float salary, string mainProgrammingLanguage) : clsEmployee(id, firstName, lastName, email, phone, title, department, salary)
    {
        _mainProgrammingLanguage = mainProgrammingLanguage;
    }

    // Setter & Getter - mainProgrammingLanguage
    void setMainProgrammingLanguage(string mainProgrammingLanguage)
    {
        _mainProgrammingLanguage = mainProgrammingLanguage;
    }
    string mainProgrammingLanguage()
    {
        return _mainProgrammingLanguage;
    }
    // print - overriding
    void print()
    {
        cout << "\nInfo:\n";
        cout << "-----------------------\n";
        cout << "ID         : " << ID() << endl;
        cout << "First name : " << firstName() << endl;
        cout << "Last name  : " << lastName() << endl;
        cout << "Full name  : " << fullName() << endl;
        cout << "Email      : " << email() << endl;
        cout << "Phone      : " << phone() << endl;

        cout << "Department : " << department() << endl;
        cout << "Title      : " << title() << endl;
        cout << "Salary     : " << salary() << endl;

        cout << "P language : " << _mainProgrammingLanguage << endl;
        cout << "-----------------------\n";
    }
};

int main()
{

    clsProgrammer Programmer1(987, "Lara", "Stone", "m@mail", 332211, "Developer", "ProgrammingCup", 4000, "c++");
    Programmer1.print();

    return 0;
}