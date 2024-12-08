#include <iostream>
#include <string>

using namespace std;

// this function takes a string as an input and returns true or false depending on it's palindromic state
bool palindrome(string &ch)
{
    int length = ch.size();
    int start = 0, end = length - 1;
    while (start < end)
    {
        if (ch[start] != ch[end])
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}
// this function creates a chTest string. the chTest string is a string generated from the input string and contains only uppercase letters
bool TaskMaster(string &ch)
{
    string chTest = "";
    for (auto &c : ch)
    {
        if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
        {
            chTest += toupper(c);
        }
    }
    return palindrome(chTest);
}
// in order to test task one this the main function to do that
int main()
{
    string ch;
    getline(cin, ch);

    if (TaskMaster(ch))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}

// i tested my function on the eg you provided
// and those are more eg :
// Azii ? z => false
// Azii ,Za => true