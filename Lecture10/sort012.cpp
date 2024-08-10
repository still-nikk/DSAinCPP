#include <bits/stdc++.h>
using namespace std;

void sort012(int *arr, int n)
{
    int zero = 0, one = 0, two = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zero++;
        }
        else if (arr[i] == 1)
        {
            one++;
        }
        else
        {
            two++;
        }
    }
    int counter = 0;
    while (zero > 0)
    {
        arr[counter++] = 0;
        zero--;
        if (counter >= n)
        {
            break;
        }
    }
    while (one > 0)
    {
        arr[counter++] = 1;
        one--;
        if (counter >= n)
        {
            break;
        }
    }
    while (two > 0)
    {
        arr[counter++] = 2;
        two--;
        if (counter >= n)
        {
            break;
        }
    }
}
// 0 0 2 2 1 1
// 0 0 1 2 1 2

int main()
{

    int n = 7;
    int arr[n] = {0, 1, 2, 1, 2, 1, 2};
    sort012(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}