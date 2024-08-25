#include <bits/stdc++.h>
using namespace std;

// int maxi(vector<int> &arr)
// {
//     int maxi = INT_MIN;
//     for (auto i : arr)
//     {
//         if (i > maxi)
//         {
//             maxi = i;
//         }
//     }

//     return maxi;
// }

int findClosestNumber(vector<int> &nums)
{
    // vector<int> ans;
    // int min = INT_MAX;
    // for (auto i : nums)
    // {
    //     if (abs(i) <= min)
    //     {
    //         min = abs(i);
    //     }
    // }
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     if (abs(nums[i]) == min)
    //     {
    //         ans.push_back(nums[i]);
    //     }
    // }
    // for (auto i : ans)
    // {
    //     cout << s[i] << " " << i << " ";
    // }
    // cout << endl;
    // return maxi(ans);
    int min = INT_MAX;
    int minIndex;
    for (int i = 0; i < nums.size(); i++)
    {
        if (abs(nums[i]) <= min)
        {
            min = abs(nums[i]);
            minIndex = i;
        }
    }
    return nums[minIndex];
}

int romanToInt(string s)
{
    int ans = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'I' && (s[i + 1] != 'V' && s[i + 1] != 'X'))
        {
            ans += 1;
            cout << s[i] << " " << i << " line 63 " << ans << endl;
        }
        else if (s[i] == 'X' && (s[i + 1] != 'L' && s[i + 1] != 'C'))
        {
            ans += 10;
            cout << s[i] << " " << i << " line 68 " << ans << endl;
        }
        else if (s[i] == 'C' && (s[i + 1] != 'D' && s[i + 1] != 'M'))
        {
            ans += 100;
            cout << s[i] << " " << i << " line 73 " << ans << endl;
        }
        else if (s[i] == 'I' && (s[i + 1] == 'V'))
        {
            ans += 4;
            cout << s[i] << " " << i << " line 78 " << ans << endl;
            i++;
            cout << s[i] << " " << i << " " << ans << endl;
        }
        else if (s[i] == 'I' && (s[i + 1] == 'X'))
        {
            ans += 9;
            cout << s[i] << " " << i << " line 85 " << ans << endl;
            i++;
            cout << s[i] << " " << i << " " << ans << endl;
        }
        else if (s[i] == 'X' && (s[i + 1] == 'L'))
        {
            ans += 40;
            cout << s[i] << " " << i << " line 92 " << ans << endl;
            i++;
            cout << s[i] << " " << i << " " << ans << endl;
        }
        else if (s[i] == 'X' && (s[i + 1] == 'C'))
        {
            ans += 90;
            cout << s[i] << " " << i << " line 99 " << ans << endl;
            i++;
            cout << s[i] << " " << i << " " << ans << endl;
        }
        else if (s[i] == 'C' && (s[i + 1] == 'D'))
        {
            ans += 400;
            cout << s[i] << " " << i << " line 106 " << ans << endl;
            i++;
            cout << s[i] << " " << i << " " << ans << endl;
        }
        else if (s[i] == 'C' && (s[i + 1] == 'M'))
        {
            ans += 900;
            cout << s[i] << " " << i << " line 113 " << ans << endl;
            i++;
            cout << s[i] << " " << i << " " << ans << endl;
        }
        else if (s[i] == 'V')
        {
            ans += 5;
            cout << s[i] << " " << i << " line 120 " << ans << endl;
        }
        else if (s[i] == 'L')
        {
            ans += 50;
            cout << s[i] << " " << i << " line 125 " << ans << endl;
        }
        else if (s[i] == 'D')
        {
            ans += 500;
            cout << s[i] << " " << i << " line 130 " << ans << endl;
        }
        else if (s[i] == 'M')
        {
            ans += 1000;
            cout << s[i] << " " << i << " line 135 " << ans << endl;
        }
    }
    return ans;
}

bool isSubsequence(string s, string t)
{
    int i = 0, j = 0;
    while (i < s.length() && j < t.length())
    {
        if ( s[i] == t[j] ) {
            i++;
            j++;
        } else {
            j++;
        }
    }
    return (i == s.length());
}

int main()
{

    // vector<int> nums = {-100000, -100000};
    // cout << findClosestNumber(nums) << endl;
    // I = 1  V = 5  X = 10  L = 50  C = 100  D = 500  M = 1000
    string s = "MCMXCIV";
    cout << s << endl;
    cout << romanToInt(s);

    return 0;
}