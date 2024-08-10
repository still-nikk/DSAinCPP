#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
}

int main()
{

    vector<int> arr = {64, 25, 12, 22, 11};
    int n = 5;
    selectionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}