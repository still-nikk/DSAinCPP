#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a[4] = {1, 3, 5, 2};
    for (auto i : a)
    {
        cout << i << " ";
    }
    cout << endl;
    // sort function
    sort(a, a + 4); // sorts the complete array in asscending order
    for (auto i : a)
    {
        cout << i << " ";
    }
    cout << endl
         << endl;

    int b[4] = {1, 3, 5, 2};
    for (auto i : b)
    {
        cout << i << " ";
    }
    cout << endl;
    sort(b + 2, b + 4); // sorts only the the subarray from index [2,4);
    for (auto i : b)
    {
        cout << i << " ";
    }
    cout << endl
         << endl;

    int c[4] = {1, 3, 5, 2};
    for (auto i : c)
    {
        cout << i << " ";
    }
    cout << endl;
    sort(c, c + 4, greater<int>()); // Sorts in descending order;
    for (auto i : c)
    {
        cout << i << " ";
    }
    cout << endl
         << endl;

    string s = "123";
    cout << *(s.begin()) << endl;
    cout << *(s.end() - 1) << endl
         << endl;

    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));

    cout << *max_element(a, a + 4) << endl;

    int n = 7;
    cout << "__builtin_popcount(" << n << "): " << __builtin_popcount(n) << endl;

    long long int i = 12347861892736;
    cout << "__builtin_popcountll(" << i << "): " << __builtin_popcountll(i) << endl;

    return 0;
}