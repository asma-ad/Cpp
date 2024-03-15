#include <iostream>
#include <vector>
using namespace std;
/*
Problem #46:
write a program to convert line data to record and print it.
*/

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
            vWords.push_back(word); // add word to vector
        text.erase(0, pos + delim.length());
    }
    if (text != "")
        vWords.push_back(text); // add the last  word to vector

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

void printClientRecord(stClientData client)
{
    cout << "\n\nThe following is the extracted client record:\n";
    cout << "\nAccount number : " << client.accountNumber;
    cout << "\nPIN code       : " << client.pinCode;
    cout << "\nName           : " << client.name;
    cout << "\nPhone          : " << client.numberPhone;
    cout << "\nBalance        : " << client.balance;
}

int main()
{
    string stLine = "A101#//#1234#//#Asma#//#060606#//#9523.000000";

    cout << "\nLine record is:\n";
    cout << stLine << endl;

    stClientData client = convertLineDataToRecord(stLine);
    printClientRecord(client);

    return 0;
}