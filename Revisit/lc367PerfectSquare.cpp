#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(int num)
{
    if (num < 1)
    {
        return false;
    }

    long long s = 1;
    long long e = num;
    while (s <= e)
    {
        long long m = s + (e - s) / 2;
        long long prod = m * m;
        if (prod == num)
        {
            return true;
        }
        else if (prod > num)
        {
            e = m - 1;
        }
        else
        {
            s = m + 1;
        }
    }
    return false;
}

int main()
{

    if (isPerfectSquare(10))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}