#include <bits/stdc++.h>
using namespace std;

int lengthOfLastWord(string s)
{
    int length = 0;
    int n = s.length();
    while (s[n] == '\0')
    {
        cout << s[n] << endl;
        n--;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == ' ')
        {
            break;
        }
        cout << s[i] << endl;
        length++;
    }
    return length;
}

int main()
{
    string s = "   fly me to the moon ";
    cout << lengthOfLastWord(s) << endl;
    return 0;
}