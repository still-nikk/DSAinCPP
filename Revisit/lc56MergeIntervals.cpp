#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> ans;

    if (intervals.empty())
        return ans;
    int i = 0;
    while (i < intervals.size())
    {
        vector<int> temp;
        temp.push_back(intervals[i][0]);

        int maxi = intervals[i][1];
        while (i < intervals.size() - 1 && maxi >= intervals[i + 1][0])
        {
            if (maxi <= intervals[i + 1][1])
            {
                maxi = intervals[i + 1][1];
            }
            i++;
        }
        temp.push_back(maxi);
        ans.push_back(temp);
        i++;
    }
    return ans;
}

int main()
{

    vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};

    for (auto i : intervals)
    {
        cout << "[ " << i[0] << "," << i[1] << " ] ";
    }

    cout << endl;
    for (auto i : merge(intervals))
    {
        cout << "[ " << i[0] << "," << i[1] << " ] ";
    }

    return 0;
}