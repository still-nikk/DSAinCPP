#include <bits/stdc++.h>
using namespace std;

char toLowerCase(char c)
{
    if (c >= 'a' && c <= 'z')
    {
        return c;
    }
    else
    {
        return c - 'A' + 'a';
    }
}

bool isAlphaNumeric(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isNumber(char c)
{
    if (c >= '0' && c <= '9')
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool checkPalindrome(string s)
{
    int st = 0;
    int e = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        e++;
    }
    e--;
    while (st <= e)
    {
        if (!isAlphaNumeric(s[st]))
        {
            st++;
        }
        else if (!isAlphaNumeric(s[e]))
        {
            e--;
        }
        else if (isNumber(s[st]))
        {
            if (s[st++] != s[e--])
            {
                return false;
            }
        }
        else if (toLowerCase(s[st++]) != toLowerCase(s[e--]))
        {
            return false;
        }
    }
    return true;
}

int main()
{

    // string s = "checkcehc";
    string s = "@";
    if (checkPalindrome(s))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}