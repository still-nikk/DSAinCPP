#include <bits/stdc++.h>
using namespace std;

int maxArea(vector<int> &height)
{
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    int maxi = 0;
    int l = 0;
    int r = height.size() - 1;
    while (l < r)
    {
        int w = r - l;
        int h = min(height[l], height[r]);
        int a = w * h;
        maxi = max(maxi, a);

        if (height[l] < height[r])
        {
            l++;
        }
        else
        {
            r--;
        }
    }
    return maxi;
}

int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << maxArea(height) << endl;
    return 0;
}