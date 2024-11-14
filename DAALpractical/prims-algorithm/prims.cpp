#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const int INF = 1e9;

int prim(int n, vector<vector<pair<int, int>>> &graph)
{
    vector<int> minCost(n, INF);
    vector<bool> inMST(n, false);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    minCost[0] = 0;
    pq.push({0, 0});
    int totalCost = 0;

    while (!pq.empty())
    {
        int cost = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        if (inMST[node])
            continue;

        inMST[node] = true;
        totalCost += cost;

        for (auto &[neighbor, weight] : graph[node])
        {
            if (!inMST[neighbor] && weight < minCost[neighbor])
            {
                minCost[neighbor] = weight;
                pq.push({weight, neighbor});
            }
        }
    }

    return totalCost;
}

int main()
{
    int n = 5;
    vector<vector<pair<int, int>>> graph(n);
    graph[0].push_back({1, 2});
    graph[1].push_back({0, 2});
    graph[0].push_back({3, 6});
    graph[3].push_back({0, 6});
    graph[1].push_back({2, 3});
    graph[2].push_back({1, 3});
    graph[1].push_back({3, 8});
    graph[3].push_back({1, 8});
    graph[1].push_back({4, 5});
    graph[4].push_back({1, 5});
    graph[2].push_back({4, 7});
    graph[4].push_back({2, 7});

    cout << "Total cost of MST: " << prim(n, graph) << endl;
    return 0;
}
