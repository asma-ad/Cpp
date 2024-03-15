#include <iostream>
using namespace std;
/*
    // create an Id card for a student
    Information ID:
        First name
        Last name
        Contact information [Email, Phone number, Address (Street, Zip code) ]
        Gender
        Status
        Favorite Color

        Use Enum => Color, Status, Gender
        Struct => Adderss, Contact, ID
    */

enum enColor
{
    Black,
    Pink,
    Yellow,
    Red,
    White
};
enum enStatus
{
    Single,
    Married,
    Divorced
};
enum enGender
{
    Female,
    Male
};

struct stAddress
{
    string street;
    int zip_code;
};

struct stContact
{
    string email;
    int phone_number;
    stAddress address;
};

struct stID
{
    string first_name;
    string last_name;
    stContact contact;
    enGender gender;
    enStatus status;
    enColor color;
};

int main()
{
    stID person1;
    person1.first_name = "Sarah";
    person1.last_name = "Nour";
    person1.contact.phone_number = 11223344;
    person1.contact.email = "myemail@mail.mail";
    person1.contact.address.street = "ABC Street";
    person1.contact.address.zip_code = 5555;
    person1.gender = enGender::Female;
    person1.status = enStatus::Married;
    person1.color = enColor::White;

    cout << "\n\nThis is an ID card for a student:\n\n";

    cout << "******************************\n";
    cout << "Firs name: " << person1.first_name << endl;
    cout << "Last name: " << person1.last_name << endl;
    cout << "Phone number: " << person1.contact.phone_number << endl;
    cout << "Email: " << person1.contact.email << endl;
    cout << "Street name: " << person1.contact.address.street << endl;
    cout << "Zip code: " << person1.contact.address.zip_code << endl;
    cout << "Gender: " << person1.gender << endl;
    cout << "Status: " << person1.status << endl;
    cout << "Favorite color: " << person1.color << endl;
    cout << "******************************\n\n";

    return 0;
}