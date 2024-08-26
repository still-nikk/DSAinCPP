#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
    if (strs.empty())
        return "";

    int mini = INT_MAX;
    for (auto i : strs)
    {
        if (i.length() <= mini)
        {
            mini = i.length();
        }
    }
    int i = 0;
    string ans = "";
    // while ( i < mini ) {
    //     char c = strs[0][i];
    //     for ( auto x : strs ) {

    //         if ( x[i] != c ) {
    //             return ans;
    //         }
    //     }
    //     ans+=c;
    //     i++;
    // }

    // return ans;
    while (i < mini)
    {
        for (const string &s : strs)
        {
            if (s[i] != strs[0][i])
            {
                return strs[0].substr(0, i);
            }
        }
        i++;
    }

    return strs[0].substr(0, i);
}

int main()
{

    vector<string> strs = {"flower", "flow", "flight"};
    cout << longestCommonPrefix(strs) << endl;

    return 0;
}