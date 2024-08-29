#include <bits/stdc++.h>
using namespace std;

double greedyKnapsack(int W, vector<int> wt, vector<int> pr) {
    int n = wt.size();
    vector<pair<double, int>> ratio(n);

    for (int i = 0; i < n; i++) {
        ratio[i] = { (double)pr[i] / wt[i], i };
    }

    sort(ratio.begin(), ratio.end(), [](pair<double, int> &a, pair<double, int> &b) {
        return a.first > b.first;
    });

    double maxi = 0.0;
    int curr = 0;

    for (int i = 0; i < n; i++) {
        int idx = ratio[i].second;
        if (curr + wt[idx] <= W) {
            curr += wt[idx];
            maxi += pr[idx];
        } else {
            int remainingWeight = W - curr;
            maxi += pr[idx] * ((double)remainingWeight / wt[idx]);
            break;
        }
    }

    return maxi;
}

int main() {
    int W = 50;

    vector<int> wt = { 10, 20, 30 };
    vector<int> pr = { 60, 100, 120 };

    cout << "Maximum value we can obtain = " << greedyKnapsack(W, wt, pr) << endl;

    return 0;
}
