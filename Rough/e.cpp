#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string> &strs)
{

    if (strs.size() == 1)
    {
        return strs[0];
    }
    int i = 0;
    string ans = "";
    while (true)
    {
        char c = strs[0][i];
        bool flag = true;
        for (auto str : strs)
        {
            if (str == "")
            {
                return "";
            }
            if (str[i] != c)
            {
                flag = false;
            }
        }
        i++;
        if (flag)
        {
            ans += c;
        }
        else
        {
            break;
        }
    }
    return ans;
}

int main()
{

    vector<string> strs = {"flower", "flower", "flower", "flower"};
    cout << longestCommonPrefix(strs) << endl;

    return 0;
}