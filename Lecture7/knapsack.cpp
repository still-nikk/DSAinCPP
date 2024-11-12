#include <bits/stdc++.h>
using namespace std;

// Greedy Knapsack (Fractional Knapsack)
double greedyKnapsack(int W, vector<int> wt, vector<int> pr)
{
    int n = wt.size();
    vector<pair<double, int>> ratio(n);

    for (int i = 0; i < n; i++)
    {
        ratio[i] = {(double)pr[i] / wt[i], i};
    }

    sort(ratio.begin(), ratio.end(), [](pair<double, int> &a, pair<double, int> &b)
         { return a.first > b.first; });

    double maxi = 0.0;
    int curr = 0;

    for (int i = 0; i < n; i++)
    {
        int idx = ratio[i].second;
        if (curr + wt[idx] <= W)
        {
            curr += wt[idx];
            maxi += pr[idx];
        }
        else
        {
            int remainingWeight = W - curr;
            maxi += pr[idx] * ((double)remainingWeight / wt[idx]);
            break;
        }
    }

    return maxi;
}

// Dynamic Programming Knapsack (0/1 Knapsack)
int dpKnapsack(int W, vector<int> wt, vector<int> pr)
{
    int n = wt.size();
    vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));

    for (int i = 1; i <= n; i++)
    {
        for (int w = 0; w <= W; w++)
        {
            if (wt[i - 1] <= w)
            {
                dp[i][w] = max(dp[i - 1][w], dp[i - 1][w - wt[i - 1]] + pr[i - 1]);
            }
            else
            {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    return dp[n][W];
}

int main()
{
    int W = 50;

    vector<int> wt = {10, 20, 30};
    vector<int> pr = {60, 100, 120};

    // Greedy approach (Fractional Knapsack)
    cout << "Maximum profit using greedy approach is: " << greedyKnapsack(W, wt, pr) << endl;

    // Dynamic Programming approach (0/1 Knapsack)
    cout << "Maximum profit using dynamic programming approach is: " << dpKnapsack(W, wt, pr) << endl;

    return 0;
}
