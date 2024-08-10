#include <bits/stdc++.h>
using namespace std;

int mySqrt(int x)
{
    if (x == 0)
    {
        return 0;
    }

    if (x == 1 || x == 2 || x == 3)
    {
        return 1;
    }

    int ans;
    int low = 2;
    int high = x / 2 + 1;
    while (low <= high)
    {
        long long int mid = low + (high - low) / 2;
        if (mid * mid == x)
        {
            return mid;
        }
        else if (mid * mid < x)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}

float myAccurateSqrt(int x, int precision)
{
    if (x == 0)
    {
        return 0;
    }

    if (x == 1)
    {
        return 1;
    }

    float ans;
    float low = 1;
    float high = x / 2 + 1;
    while (low <= high)
    {
        float mid = low + (high - low) / 2;
        if (mid * mid == x)
        {
            return mid;
        }
        else if (mid * mid < x)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    float adder = 0.1;
    for (int i = 0; i < precision; i++)
    {
        float temp = adder;
        while (ans * ans <= x)
        {
            ans += adder;
        }
        ans -= adder;
        adder /= 10;
    }
    return ans;
}

int main()
{

    int x;
    cout << "Enter the number for which you want to calculate the square root: ";
    cin >> x;
    cout << "Enter the precision: ";
    int precision;
    cin >> precision;

    cout << "Square Root of " << x << " is: " << mySqrt(x) << endl;
    cout << "Square Root of " << x << " is: " << myAccurateSqrt(x, precision) << endl;

    return 0;
}