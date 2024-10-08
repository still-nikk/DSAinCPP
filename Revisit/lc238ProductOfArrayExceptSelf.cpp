#include <bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int> &nums)
{
    int n = nums.size();
    vector<int> result(n);

    int leftProduct = 1;
    int rightProduct = 1;

    // Calculate left products
    for (int i = 0; i < n; i++)
    {
        result[i] = leftProduct;
        leftProduct *= nums[i];
    }

    // Calculate right products and final result
    for (int i = n - 1; i >= 0; i--)
    {
        result[i] *= rightProduct;
        rightProduct *= nums[i];
    }

    return result;
}

int main()
{

    vector<int> nums = {1, 2, 3, 4};

    for (auto i : productExceptSelf(nums))
    {
        cout << i << " ";
    }

    return 0;
}