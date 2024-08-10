/*
Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.



Example 1:

Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.
Example 2:

Input: arr = [1,2]
Output: false
Example 3:

Input: arr = [-3,0,1,-3,1,1,1,-3,10,0]
Output: true
*/

#include <bits/stdc++.h>
using namespace std;

bool uniqueOccurrences(vector<int> &arr)
{
    vector<int> occurences;
    vector<int> digits;
    for (int i = 0; i < arr.size(); i++)
    {
        bool inDigits = false;
        int count = 0;
        for (int j = 0; j < digits.size(); j++)
        {
            if (digits[j] == arr[i])
            {
                inDigits = true;
            }
        }
        if (inDigits)
        {
            continue;
        }
        else
        {
            digits.push_back(arr[i]);
            for (int k = i + 1; k < arr.size(); k++)
            {
                if (arr[i] == arr[k])
                {
                    count++;
                }
            }
            occurences.push_back(count);
        }
    }

    for (int l = 0; l < occurences.size(); l++)
    {
        for (int m = l + 1; m < occurences.size(); m++)
        {
            if (occurences[m] == occurences[l])
            {
                return false;
            }
        }
    }

    return true;
}

int main()
{

    vector<int> arr = {1,2,2,1,1,3};
    if(uniqueOccurrences(arr)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}