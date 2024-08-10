#include <bits/stdc++.h>
using namespace std;

void printArr(vector<int> &arr)
{
    cout << "[ ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << "]" << endl;
}

void bubbleSort(vector<int> &arr, int n)
{
    int counter = 1;
    for (int i = 0; i < n; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        cout << counter++ << endl;
        printArr(arr);
        cout << endl;
        if (swapped == false)
        {
            return;
        }
    }
}

int main()
{

    vector<int> arr = {1, 2, 3, 4, 5};
    int n = 5;
    bubbleSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}