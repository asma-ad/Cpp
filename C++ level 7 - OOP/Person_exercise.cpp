#include <iostream>
using namespace std;

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

int main()
{
    clsPerson person1(123, "Asma", "Aj", "my@email", 66112233);
    person1.print();

    person1.sendEmail("Hi", "This is an email!");
    person1.sendSMS("How are you?");

    return 0;
}