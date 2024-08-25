#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int minPrice = INT_MAX;
    int maxProfit = 0;
    
    for (int i = 0; i < prices.size(); i++)
    {
        if (prices[i] <= minPrice)
        {
            minPrice = prices[i];
        }
        int profit = prices[i] - minPrice;
        if (profit >= maxProfit)
        {
            maxProfit = profit;
        }
    }
    return maxProfit;
}

int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << maxProfit(prices);
    return 0;
}