#include <iostream>
using namespace std;
/*
Problem #45:
write a program to read bank client data record and convert it to one line.
*/

struct stClientData
{
    string pinCode;
    string accountNumber;
    string name;
    string numberPhone;
    double balance;
};

stClientData readData()
{
    stClientData client;
    cout << "Enter your account number: ";
    getline(cin, client.accountNumber);

    cout << "Enter your PIN code: ";
    getline(cin, client.pinCode);

    cout << "Enter your name: ";
    getline(cin, client.name);

    cout << "Enter your phone number: ";
    getline(cin, client.numberPhone);

    cout << "Enter your account balance: ";
    cin >> client.balance;

    return client;
}

string convertRecordToLine(stClientData client, string seperator = "#//#")
{
    string str = "";

    str += client.accountNumber + seperator;
    str += client.pinCode + seperator;
    str += client.name + seperator;
    str += client.numberPhone + seperator;
    str += to_string(client.balance);

    return str;
}

int main()
{
    stClientData client1 = readData();
    cout << "Client record for saving is:\n";
    cout << convertRecordToLine(client1);

    return 0;
}