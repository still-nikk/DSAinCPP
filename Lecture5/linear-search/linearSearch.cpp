#include <bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> &arr, int key)
{

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == key)
        {
            return i + 1;
        }
    }
    return -1;
}

int recursiveLinearSearch(vector<int> &arr, int pos, int key)
{
    if (pos >= arr.size())
    {
        return -1;
    }
    else if (arr[pos] == key)
    {
        return pos + 1;
    }
    else
    {
        return recursiveLinearSearch(arr, pos + 1, key);
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int key = 11
    ;
    if (linearSearch(arr, key) == -1)
    {
        cout << "Element not found" << endl;
    }
    else
    {
        cout << key << " was found at " << linearSearch(arr, key) << endl;
    }

    if (recursiveLinearSearch(arr, 0, key) == -1)
    {
        cout << "Element not found" << endl;
    }
    else
    {
        cout << key << " was found at " << recursiveLinearSearch(arr, 0, key) << endl;
    }
    return 0;
}