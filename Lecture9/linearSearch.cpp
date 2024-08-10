#include <bits/stdc++.h>
using namespace std;

bool linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }
    return false;
}

int main()
{

    int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};

    int key;
    cout << "Enter your key to search: " << endl;
    cin >> key;

    if (linearSearch(arr, 10, key))
    {
        cout << "Found!" << endl;
    }
    else
    {
        cout << "Not Found!" << endl;
    }

    return 0;
}