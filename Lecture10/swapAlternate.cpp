#include <bits/stdc++.h>
using namespace std;

void swapAlternate(int arr[], int size)
{
    int i = 0;
    int j = 1;

    while (j <= size && i <= size)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i += 2;
        j += 2;
        if (j >= size || i >= size)
        {
            return;
        }
    }
}

int main()
{
    int err[6] = {1, 2, 3, 4, 5, 6};
    int orr[5] = {1, 2, 3, 4, 5};
    cout << "Swapped array with even elements: " << endl;
    swapAlternate(err, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << err[i] << " ";
    }
    cout << endl << "Swapped array with odd elements: " << endl;
    swapAlternate(orr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << orr[i] << " ";
    }

    return 0;
}