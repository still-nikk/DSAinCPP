#include <bits/stdc++.h>
using namespace std;

int search(vector<int> &arr, int n, int k)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == k)
        {
            return mid;
        }
        // left part sorted
        if (arr[low] <= arr[mid])
        {
            // element is in the sorted part
            if (k <= arr[mid] && k >= arr[low])
            {
                int s = low;
                int e = mid;
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
                cout << "Left sorted " << endl;
                return -1;
            }
            // element is not in the sorted part
            else
            {
                low = mid + 1;
            }
        }

        // right part sorted
        else
        {
            // element is in the sorted part
            if (k <= arr[high] && k >= arr[mid])
            {
                int s = mid;
                int e = high;
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
                cout << "Right sorted " << endl;
                return -1;
            }
            // element is not in the sorted part
            else
            {
                high = mid - 1;
            }
        }
    }
    cout << "End of first while! " << endl;
    return -1;
}

int main()
{

    vector<int> arr = {10, 11, 1, 2, 3, 4, 5, 6, 9};
    int n = 9;
    int k = 9;
    cout << search(arr, n, k);

    return 0;
}