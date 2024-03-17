#pragma once
#include <iostream>
#include <vector>
using namespace std;

// length, countWords, upperFirstLettersOfEachWord, lowerFirstLettersOfEachWord, upperAllString, lowerAllString, invertLetterCase, invertAllLetterCase, countLetters, countCapitalLetters, countSmallLetters, countSpecificLetters, isVowel, countVowels, split, trimLeft, trimRight, trim, jonString, reversWordInString, replaceWord, removePunctuation.

class clsString
{
private:
    string _value;

public:
    // default constructor
    clsString()
    {
        _value = "";
    }
    // parameterized constructor
    clsString(string value)
    {
        _value = value;
    }
    //  set & get value
    void setValue(string value)
    {
        _value = value;
    }
    string getValue()
    {
        return _value;
    }
    // Property declaration
    //  __declspec(property(get = getValue, put = setValue)) string Value;

    // ---length---
    static short length(string text)
    {
        return text.length();
    }
    short length()
    {
        return _value.length();
    }
    // ---count words methods---
    // static method (general)
    static short countWords(string text)
    {
        std::string delim = " ";
        std::string word;
        short pos = 0;
        short counter = 0;

        while ((pos = text.find(delim)) != std::string::npos)
        {
            word = text.substr(0, pos);
            if (word != "")
                counter++;
            text.erase(0, pos + delim.length());
        }
        if (text != "")
            counter++;

        return counter;
    }
    // method (for objects)
    short countWords()
    {
        return countWords(_value);
    }
    // ---upper first letters of each word---
    static string upperFirstLetterOfEachWord(string text)
    {
        bool isFirstLetter = true;
        for (short i = 0; i < text.length(); i++)
        {
            if (text[i] != ' ' && isFirstLetter)
            {
                text[i] = toupper(text[i]);
            }
            isFirstLetter = (text[i] == ' ' ? true : false);
        }
        return text;
    }
    void upperFirstLetterOfEachWord()
    {
        // no need to return value , this function will directly update the object value
        _value = upperFirstLetterOfEachWord(_value);
    }
    // ---lower First Letter Of Each Word---
    static string lowerFirstLetterOfEachWord(string text)
    {
        bool isFirstLetter = true;
        for (short i = 0; i < text.length(); i++)
        {
            if (text[i] != ' ' && isFirstLetter)
            {
                text[i] = tolower(text[i]);
            }
            isFirstLetter = (text[i] == ' ' ? true : false);
        }
        return text;
    }
    void lowerFirstLetterOfEachWord()
    {
        // no need to return value , this function will directly update the object value
        _value = lowerFirstLetterOfEachWord(_value);
    }
    // ---Upper all string---
    static string upperAllString(string text)
    {
        for (short i = 0; i < text.length(); i++)
        {
            text[i] = toupper(text[i]);
        }
        return text;
    }
    void upperAllString()
    {
        _value = upperAllString(_value);
    }
    // ---Lower all string---
    static string lowerAllString(string &text)
    {
        for (short i = 0; i < text.length(); i++)
        {
            text[i] = tolower(text[i]);
        }
        return text;
    }
    void lowerAllString()
    {
        _value = lowerAllString(_value);
    }
    // ---Invert Letter Case---
    static char invertLetterCase(char c)
    {
        return isupper(c) ? tolower(c) : toupper(c);
    }
    // ---Invert All Letters Case---
    static string invertAllLettersCase(string text)
    {
        for (short i = 0; i < text.length(); i++)
        {
            text[i] = invertLetterCase(text[i]);
        }
        return text;
    }
    void invertAllLettersCase()
    {
        _value = invertAllLettersCase(_value);
    }
    // ---Count letters---
    enum enWhatToCount
    {
        SmallLetters = 0,
        CapitalLetters = 1,
        All = 3
    };
    static short countLetters(string text, enWhatToCount whatToCount = enWhatToCount::All)
    {
        if (whatToCount == enWhatToCount::All)
        {
            return text.length();
        }
        short counter = 0;
        for (short i = 0; i < text.length(); i++)
        {
            if (whatToCount == enWhatToCount::CapitalLetters && isupper(text[i]))
            {
                counter++;
            }
            if (whatToCount == enWhatToCount::SmallLetters && islower(text[i]))
            {
                counter++;
            }
        }
        return counter;
    }
    // ---count capital letters---
    static short countCapitalLetters(string text)
    {
        short counter = 0;
        for (short i = 0; i < text.length(); i++)
        {
            if (isupper(text[i]))
            {
                counter++;
            }
        }
        return counter;
    }
    short countCapitalLetters()
    {
        return countCapitalLetters(_value);
    }
    // ---count small letters---
    static short countSmallLetters(string text)
    {
        short counter = 0;
        for (short i = 0; i < text.length(); i++)
        {
            if (islower(text[i]))
            {
                counter++;
            }
        }
        return counter;
    }
    short countSmallLetters()
    {
        return countSmallLetters(_value);
    }
    // ---Count Specific Letter---
    static short countSpecificLetter(string text, char letter, bool matchCase = true)
    {
        short counter = 0;
        for (short i = 0; i < text.length(); i++)
        {
            if (matchCase)
            {
                if (text[i] == letter)
                {
                    counter++;
                }
                else
                {
                    if (tolower(text[i]) == tolower(letter))
                    {
                        counter++;
                    }
                }
            }
        }
        return counter;
    }
    short countSpecificLetter(char letter, bool matchCase = true)
    {
        return countSpecificLetter(_value, letter, matchCase);
    }
    // ---is vowel---
    static bool isVowel(char letter)
    {
        letter = tolower(letter);
        return (letter == 'a') || (letter == 'o') || (letter == 'i') || (letter == 'u') || (letter == 'e');
    }
    // ---Count Vowels---
    static short countVowels(string text)
    {
        short counter = 0;
        for (short i = 0; i < text.length(); i++)
        {
            if (isVowel(text[i]))
            {
                counter++;
            }
        }
        return counter;
    }
    short countVowels()
    {
        return countVowels(_value);
    }
    // --- Split ---
    static vector<string> split(string text, string delim)
    {
        vector<string> vString;
        short pos = 0;
        string sWord;

        // use find() function to get the position of the delimiters
        while ((pos = text.find(delim)) != std::string::npos)
        {
            // store the word
            sWord = text.substr(0, pos);
            // add word to vec
            if (sWord != "")
            {
                vString.push_back(sWord);
            }
            // erase() until positon and move to next word
            text.erase(0, pos + delim.length());
        }
        // add the last word of the string
        if (text != "")
        {
            vString.push_back(text);
        }
        return vString;
    }
    vector<string> split(string delim)
    {
        return split(_value, delim);
    }
    // ---Trim methods---
    static string trimLeft(string text)
    {
        for (short i = 0; i < text.length(); i++)
        {
            if (text[i] != ' ')
            {
                return text.substr(i, text.length() - i);
            }
        }
        return "";
    }
    void trimLeft()
    {
        _value = trimLeft(_value);
    }

    static string trimRight(string text)
    {
        for (short i = text.length() - 1; i >= 0; i--)
        {
            if (text[i] != ' ')
            {
                return text.substr(0, i + 1);
            }
        }
        return "";
    }
    void trimRight()
    {
        _value = trimRight(_value);
    }

    static string Trim(string text)
    {
        return (trimLeft(trimRight(text)));
    }
    void Trim()
    {
        _value = Trim(_value);
    }

    // ---Join String---
    static string joinString(vector<string> vString, string delim)
    {
        string str = "";
        for (string &s : vString)
        {
            str = str + s + delim;
        }
        return str.substr(0, str.length() - delim.length());
    }
    static string joinString(string arrStr[], short length, string delim)
    {
        string str = "";
        for (short i = 0; i < length; i++)
        {
            str = str + arrStr[i] + delim;
        }
        return str.substr(0, str.length() - delim.length());
    }

    // ---Reverse words in string---
    static string reversWordInString(string str)
    {
        vector<string> vString;
        string str2 = "";
        vString = split(str, " ");
        vector<string>::iterator i = vString.end(); // iterator
        while (i != vString.begin())
        {
            --i;
            str2 += *i + " ";
        }
        str2 = str2.substr(0, str2.length() - 1); // remove last space
        return str2;
    }
    void reversWordInString()
    {
        _value = reversWordInString(_value);
    }

    // ---replac eWord---
    static string replaceWord(string str, string strToReplace, string strReplaceTo, bool matchCase = true)
    {
        vector<string> vString = split(str, " ");

        for (string &s : vString)
        {
            if (matchCase)
            {
                if (s == strToReplace)
                {
                    s = strReplaceTo;
                }
            }
            else
            {
                if (lowerAllString(str) == lowerAllString(strToReplace))
                {
                    s = strReplaceTo;
                }
            }
        }

        return joinString(vString, " ");
    }
    string replaceWord(string strToReplace, string strReplaceTo)
    {
        return replaceWord(_value, strToReplace, strReplaceTo);
    }

    // ---remove Punctuation---
    static string removePunctuation(string str)
    {
        string str2 = "";
        for (short i = 0; i < str.length(); i++)
        {
            if (!ispunct(str[i]))
            {
                str2 += str[i];
            }
        }
        return str2;
    }
    void removePunctuation()
    {
        _value = removePunctuation(_value);
    }
};