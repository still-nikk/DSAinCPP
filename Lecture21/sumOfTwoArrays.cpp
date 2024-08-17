#include <bits/stdc++.h>
using namespace std;

vector<int> findArraySum(vector<int> &a, int n, vector<int> &b, int m)
{
    int num1 = 0;
    int num2 = 0;
    for (int i = 0; i < n; i++)
    {
        num1 = num1 * 10 + (a[i]);
    }
    for (int j = 0; j < m; j++)
    {
        num2 = num2 * 10 + (b[j]);
    }
    int sum = num1 + num2;
    int size;
    if (n >= m)
    {
        if (sum / (pow(10, n)) >= 1)
        {
            size = n + 1;
        }
        else
        {
            size = n;
        }
    }
    else
    {
        if (sum / (pow(10, m)) >= 1)
        {
            size = m + 1;
        }
        else
        {
            size = m;
        }
    }
    vector<int> ans(size);

    for (int i = size - 1; i >= 0; i--)
    {
        ans[i] = sum % 10;
        sum /= 10;
    }

    return ans;
}

int main()
{
    vector<int> a = {4, 5, 1};
    vector<int> b = {3, 4, 5};
    int n = 3;
    int m = 3;
    vector<int> ans = findArraySum(a, n, b, m);
    for (auto i : ans)
    {
        cout << i << " ";
    }
    return 0;
}