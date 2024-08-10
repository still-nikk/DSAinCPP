#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

void fancyReverseArray(int arr[], int size)
{
    int l = 0;
    int h = size - 1;

    while (l < h)
    {
        int temp = arr[l];
        arr[l] = arr[h];
        arr[h] = temp;
        l++;
        h--;
    }
}

int main()
{
    int size = 5;
    int arr[size] = {1, 2, 3, 4, 5};
    reverseArray(arr, size);
    cout << "After normal reversal:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl << "After fancy Reversal:" << endl;
    fancyReverseArray(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}