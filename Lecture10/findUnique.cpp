/*
Problem statement
You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].

Now, in the given array/list, 'M' numbers are present twice and one number is present only once.

You need to find and return that number which is unique in the array/list.

Sample Input 1:
1
7
2 3 1 6 3 6 2
Sample Output 1:
1

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int ans;
    int arr[7] = {1, 5, 2, 4, 2, 1, 5};
    ans = arr[0];
    for (int i = 1; i < 7; i++)
    {
        ans = ans ^ arr[i];
    }
    cout << ans << endl;
    return 0;
}