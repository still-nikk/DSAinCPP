#include <bits/stdc++.h>
using namespace std;

int getLowerPivot(vector<int> &arr, int n)
{
    int s = 0;
    int e = n - 1;
    int m = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[m] >= arr[0])
        {
            s = m + 1;
        }
        else
        {
            e = m;
        }
        m = s + (e - s) / 2;
    }
    return s;
}

int searchInRotatedSortedArray(vector<int> &arr, int n, int k)
{
    if (k >= arr[getLowerPivot(arr, n)] && k <= arr[n - 1])
    {
        int s = getLowerPivot(arr, n);
        int e = n - 1;
        int m = s + (e - s) / 2;
        while (s <= e)
        {
            if (arr[m] == k)
            {
                return m;
            }
            else if (arr[m] > k)
            {
                e = m - 1;
            }
            else
            {
                s = m + 1;
            }
            m = s + (e - s) / 2;
        }
    }
    else
    {
        int s = 0;
        int e = getLowerPivot(arr, n) - 1;
        int m = s + (e - s) / 2;
        while (s <= e)
        {

            if (arr[m] == k)
            {
                return m;
            }
            else if (arr[m] < k)
            {
                s = m + 1;
            }
            else
            {
                e = m - 1;
            }
            m = s + (e - s) / 2;
        }
    }
    return -1;
}

int main()
{
    int n = 5;
    vector<int> arr = {1, 2, 3, 4, 5};

    cout << "Lower Pivot element is at index : " << getLowerPivot(arr, n) << endl;
    // cout << "Upper Pivot element is at index : " << getUpperPivot(arr, n) << endl;

    int key = 0;

    if (searchInRotatedSortedArray(arr, n, key) == -1)
    {
        cout << "Element not found" << endl;
    }
    else
    {
        cout << "Element found at index : " << searchInRotatedSortedArray(arr, n, key) << endl;
    }

    return 0;
}