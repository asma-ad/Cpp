#include <iostream>
#include <fstream>

using namespace std;
/*
Problem #47
write a program to ask user to enter clients and save them into a file.
*/

const string clientFile = "Clients.txt";

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
    getline(cin >> ws, client.accountNumber); // ws == extract white spaces

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

void addDataLineToFile(string FileName, string stDataLine)
{
    // declare
    fstream MyFile;
    // open a file for writting or appending
    MyFile.open(FileName, ios::out | ios::app);
    // check if the file is open
    if (MyFile.is_open())
    {
        // add data line to the file
        MyFile << stDataLine << endl;
        // close the file
        MyFile.close();
    }
    else
    {
        cerr << "Error: Unable to open the file " << FileName << " for writing or appending.\n";
    }
}

void addNewClient()
{
    stClientData client = readData();
    addDataLineToFile(clientFile, convertRecordToLine(client));
}

void addClients()
{
    char addMore = 'Y';
    do
    {
        // system("cls");
        addNewClient();

        cout << "\nClient added successufully!\nDo you want to add more clients? [Y/N]: ";
        cin >> addMore;

    } while (toupper(addMore) == 'Y');
}

int main()
{
    addClients();

    return 0;
}