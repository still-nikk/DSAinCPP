#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int optimalMergeCost(vector<int> &files)
{
    priority_queue<int, vector<int>, greater<int>> minHeap(files.begin(), files.end());
    int totalCost = 0;

    while (minHeap.size() > 1)
    {
        int first = minHeap.top();
        minHeap.pop();
        int second = minHeap.top();
        minHeap.pop();

        int mergeCost = first + second;
        totalCost += mergeCost;

        minHeap.push(mergeCost);
    }

    return totalCost;
}

int main()
{
    vector<int> files = {10, 20, 30, 40};
    cout << "Minimum merge cost: " << optimalMergeCost(files) << endl;
    return 0;
}
