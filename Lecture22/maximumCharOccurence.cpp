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

char maxOccur(string s)
{
    vector<int> arr(26);
    fill(arr.begin(), arr.end(), 0);
    int i = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        char c = toLowerCase(s[i]);
        arr[c - 'a']++;
    }

    int maxi = -1;
    int num = 0;
    for (int j = 0; j < arr.size(); j++)
    {
        if (arr[j] > maxi)
        {
            maxi = arr[j];
            num = j;
        }
    }

    return 'a' + num;
}

int main()
{

    string s = "testsamples";
    cout << maxOccur(s) << endl;

    return 0;
}