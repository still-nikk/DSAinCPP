#include <bits/stdc++.h>
using namespace std;

bool linearSearch(vector<int> &arr, int key)
{
    for (auto i : arr)
    {
        if (i == key)
            return true;
    }
    return false;
}

bool recursiveLinearSearch(vector<int> &arr, int key, int n)
{
    if (n == arr.size())
        return false;
    else if (arr[n] == key)
        return true;
    return recursiveLinearSearch(arr, key, n + 1);
}

int main()
{

    vector<int> arr = {0, 1, 2, 3, 4, 5, 6, 7};
    int key = 5;

    if (linearSearch(arr, key))
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;
    if (recursiveLinearSearch(arr, key, 0))
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;

    return 0;
}