#include <iostream>
#include <vector>
#include <fstream>
#include <iomanip>
/*
Problem #48
write a program to read clients file and show them on the screen as following: (picture)
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

void printClientRecord(stClientData client)
{
    cout << "|  " << left << setw(15) << client.accountNumber;
    cout << "|  " << left << setw(10) << client.pinCode;
    cout << "|  " << left << setw(40) << client.name;
    cout << "|  " << left << setw(12) << client.numberPhone;
    cout << "|  " << left << setw(12) << client.balance;
}

void printAllClientsData(vector<stClientData> vClient)
{
    // header
    cout << "\n\t\t\t\t\tClient List (" << vClient.size() << ") client(s).";
    cout << "\n---------------------------------------------------------------------------------------------------------------\n";

    cout << "|  " << left << setw(15) << "Account number";
    cout << "|  " << left << setw(10) << "PIN code";
    cout << "|  " << left << setw(40) << "Client name";
    cout << "|  " << left << setw(12) << "Phone";
    cout << "|  " << left << setw(12) << "Balance";
    cout << "\n---------------------------------------------------------------------------------------------------------------\n";

    // body
    for (stClientData client : vClient)
    {
        printClientRecord(client);
        cout << "\n";
    }
    cout << "\n---------------------------------------------------------------------------------------------------------------\n";
}

int main()
{
    vector<stClientData> vClient = loadClientDataFromFile(clientFile);
    printAllClientsData(vClient);

    return 0;
}