#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int key)
{
    int l = 0;
    int h = arr.size() - 1;
    while (l <= h)
    {
        int m = l + (h - l) / 2;
        if (arr[m] == key)
        {
            return m + 1;
        }
        else if (arr[m] > key)
        {
            h = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }
    return -1;
}

int recursiveBinarySearch(vector<int> &arr, int l, int h, int key)
{
    int m = l + (h - l) / 2;
    if (arr[m] == key)
    {
        return m + 1;
    }
    else if (arr[m] > key)
    {
        return recursiveBinarySearch(arr, l, m - 1, key);
    }
    else
    {
        return recursiveBinarySearch(arr, m + 1, h, key);
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int key = 1;
    if (binarySearch(arr, key) == -1)
    {
        cout << "Element not found" << endl;
    }
    else
    {
        cout << key << " was found at " << binarySearch(arr, key) << endl;
    }
    if (recursiveBinarySearch(arr, 0, arr.size() - 1, key) == -1)
    {
        cout << "Element not found" << endl;
    }
    else
    {
        cout << key << " was found at " << recursiveBinarySearch(arr, 0, arr.size() - 1, key) << endl;
    }
    return 0;
}