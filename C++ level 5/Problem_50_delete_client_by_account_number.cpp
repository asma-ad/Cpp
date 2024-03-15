#include <iostream>
#include <vector>
#include <fstream>
#include <iomanip>
/*
Problem #50
write a program to delete client by accountnumber.
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
    bool markForDelete = false;
};

string readAccountNumber()
{
    string account_N = "";
    cout << "Enter account number: ";
    cin >> account_N;
    return account_N;
}

void printClientRecord(stClientData client)
{
    cout << "\nAccount number :  " << client.accountNumber;
    cout << "\nPIN code       :  " << client.pinCode;
    cout << "\nClient name    :  " << client.name;
    cout << "\nNumber phone   :  " << client.numberPhone;
    cout << "\nBalaance       :  " << client.balance;
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

bool isClientFound(vector<stClientData> vClient, stClientData &client, string account_N)
{
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

bool markAccountForDeletion(vector<stClientData> &vClients, string account_N)
{
    for (stClientData &c : vClients)
    {
        if (c.accountNumber == account_N)
        {
            c.markForDelete = true;
            return true;
        }
    }
    return false;
}

vector<stClientData> saveClientsToFile(string fileName, vector<stClientData> vClients)
{
    fstream MyFile;
    // open file to overwrite
    MyFile.open(fileName, ios::out);
    string dataLine;
    if (MyFile.is_open())
    {
        for (stClientData c : vClients)
        {
            // add only clients that are not marked for deletion
            if (c.markForDelete == false)
            {
                dataLine = convertRecordToLine(c);
                MyFile << dataLine << endl;
            }
        }
        MyFile.close();
    }
    return vClients;
}

bool deleteClients(vector<stClientData> &vClients, string account_N)
{
    stClientData client;
    char answer = 'n';

    if (isClientFound(vClients, client, account_N))
    {
        printClientRecord(client);
        cout << "\n\nAre you sure you want to delete this client [Y/N]?  ";
        cin >> answer;

        if (answer == 'y' || answer == 'Y')
        {
            // mark account for deletion
            markAccountForDeletion(vClients, account_N);
            // save clients to file
            saveClientsToFile(clientFile, vClients);
            // refrsh clients
            vClients = loadClientDataFromFile(clientFile);

            cout << "\n\nClient account deleted successfully!";
            return true;
        }
    }
    cout << "Account " << account_N << " Not found!\n";
    return false;
}

int main()
{
    // load clients data from file
    vector<stClientData> vClients = loadClientDataFromFile(clientFile);
    // read account number to delete
    string account_N = readAccountNumber();
    // delete client account
    deleteClients(vClients, account_N);

    return 0;
}