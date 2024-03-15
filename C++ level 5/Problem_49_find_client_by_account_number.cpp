#include <iostream>
#include <vector>
#include <fstream>
#include <iomanip>
/*
Problem #49
write a program to find client by accountnumber and print it to the screen.
*/
using namespace std;
const string clientFile = "Clients.txt";

struct stClientData
{
    string pinCode;
    string accountNumber;
    string name;
    string numberPhone;
    double balance;
};

string readAccountNumber()
{
    string account_N = "";
    cout << "Enter account number: ";
    cin >> account_N;
    return account_N;
}

std::vector<std::string> split(std::string text, std::string delim)
{
    std::vector<std::string> vWords;
    std::string word;
    short pos = 0;

    while ((pos = text.find(delim)) != std::string::npos)
    {
        word = text.substr(0, pos);
        if (word != "")
            vWords.push_back(word);
        text.erase(0, pos + delim.length());
    }
    if (text != "")
        vWords.push_back(text);

    return vWords;
}

stClientData convertLineDataToRecord(string record, string seperator = "#//#")
{
    stClientData stClient;
    vector<string> vClient = split(record, seperator);

    stClient.accountNumber = vClient[0];
    stClient.pinCode = vClient[1];
    stClient.name = vClient[2];
    stClient.numberPhone = vClient[3];
    stClient.balance = stod(vClient[4]);

    return stClient;
}

vector<stClientData> loadClientDataFromFile(string fileName)
{
    vector<stClientData> vClient;
    fstream MyFile;
    MyFile.open(fileName, ios::in); // read mode
    if (MyFile.is_open())
    {
        string line;
        stClientData client;
        while (getline(MyFile, line))
        {
            // convert line to record (struct)
            client = convertLineDataToRecord(line);
            // add record (struct) to vector
            vClient.push_back(client);
        }
        MyFile.close();
    }
    return vClient;
}

bool isClientFound(stClientData &client, string account_N)
{
    vector<stClientData> vClient = loadClientDataFromFile(clientFile);
    for (stClientData c : vClient)
    {
        if (c.accountNumber == account_N)
        {
            client = c;
            return true;
        }
    }

    return false;
}

void printClientRecord(stClientData client)
{
    cout << "\nAccount number :  " << client.accountNumber;
    cout << "\nPIN code       :  " << client.pinCode;
    cout << "\nClient name    :  " << client.name;
    cout << "\nNumber phone   :  " << client.numberPhone;
    cout << "\nBalaance       :  " << client.balance;
}

int main()
{
    string account_N = readAccountNumber();
    stClientData client;

    if (isClientFound(client, account_N))
        printClientRecord(client);
    else
        cout << "Not found!\nThere's no account with " << account_N << "!\n";
    return 0;
}