#include <bits/stdc++.h>
using namespace std;

// s2 contains the permutation of s1
bool checkEqual(int arr1[], int arr2[])
{
    for (int i = 0; i < 26; i++)
    {
        if (arr1[i] != arr2[i])
        {
            return 0;
        }
    }
    return 1;
}

bool checkInclusion(string s1, string s2)
{
    if (s2.length() < s1.length())
        return 0;

    int charArray1[26] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        int index = s1[i] - 'a';
        charArray1[index]++;
    }

    int j = 0;
    int windowSize = s1.length();
    int charArray2[26] = {0};
    while (j < windowSize)
    {
        int index = s2[j] - 'a';
        charArray2[index]++;
        j++;
    }

    if (checkEqual(charArray1, charArray2))
        return 1;

    while (j < s2.length())
    {
        int index = s2[j] - 'a';
        charArray2[index]++;
        char c = s2[j - windowSize];
        int index2 = c - 'a';
        charArray2[index2]--;
        j++;

        if (checkEqual(charArray1, charArray2))
            return 1;
    }
    return 0;
}

int main()
{

    string s1 = "ab";
    string s2 = "eidbaooo";

    if (checkInclusion(s1, s2))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}