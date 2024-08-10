#include <bits/stdc++.h>
using namespace std;

int upperPivot(vector<int> arr, int n)
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
    if (s == 0)
    {
        return n - 1;
    }
    else
    {
        return s - 1;
    }
}

// int getUpperPivot(vector<int> arr, int n)
// {
//     int s = 0;
//     int e = n - 1;
//     int m = s + (e - s) / 2;
//     while (s < e)
//     {
//         if (arr[m] >= arr[0])
//         {
//             s = m + 1;
//         }
//         else
//         {
//             e = m;
//         }
//         m = s + (e - s) / 2;
//     }
//     // Adjusting to handle the case where the first element is the largest
//     if (s == n) {
//         return n - 1;
//     } else if (s == 0) {
//         return 0;
//     } else {
//         return s - 1;
//     }
// }

int getLowerPivot(vector<int> arr, int n)
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

int main()
{

    vector<int> arr = { 1, 2, 3, 4, 5};
    int n = 5;

    cout << "The lower pivot of this array is at index: " << getLowerPivot(arr, n) << endl;
    cout << "The upper pivot of this array is at index: " << upperPivot(arr, n) << endl;

    return 0;
}