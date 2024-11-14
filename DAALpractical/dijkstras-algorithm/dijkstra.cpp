#include <bits/stdc++.h>
using namespace std;

vector<int> dijkstraUsingAdjList(int nodes, vector<pair<int, int>> adjList[], int source)
{
    vector<int> distance(nodes, INT_MAX);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    distance[source] = 0;
    pq.push({0, source});

    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();

        for (auto &neighbor : adjList[u])
        {
            int v = neighbor.first;
            int weight = neighbor.second;

            if (distance[u] + weight < distance[v])
            {
                distance[v] = distance[u] + weight;
                pq.push({distance[v], v});
            }
        }
    }

    return distance;
}

int main()
{
    int nodes = 5;
    vector<pair<int, int>> adjList[5];

    adjList[0].push_back({1, 10});
    adjList[0].push_back({4, 3});
    adjList[1].push_back({2, 2});
    adjList[4].push_back({1, 1});
    adjList[4].push_back({2, 8});

    int source = 0;
    vector<int> distances = dijkstraUsingAdjList(nodes, adjList, source);

    for (int i = 0; i < nodes; i++)
    {
        cout << "Distance from node " << source << " to node " << i << " is " << distances[i] << endl;
    }

    return 0;
}
