#include <bits/stdc++.h>
using namespace std;

vector<int> dijkstraUsingAdjMatrix(int nodes, vector<vector<int>> &adjMatrix, int source)
{
    vector<int> distance(nodes, INT_MAX);
    vector<bool> visited(nodes, false);

    distance[source] = 0;

    for (int i = 0; i < nodes - 1; i++)
    {
        int minDist = INT_MAX, u;

        for (int j = 0; j < nodes; j++)
        {
            if (!visited[j] && distance[j] < minDist)
            {
                minDist = distance[j];
                u = j;
            }
        }

        visited[u] = true;

        for (int v = 0; v < nodes; v++)
        {
            if (!visited[v] && adjMatrix[u][v] && distance[u] != INT_MAX && distance[u] + adjMatrix[u][v] < distance[v])
            {
                distance[v] = distance[u] + adjMatrix[u][v];
            }
        }
    }

    return distance;
}

int main()
{
    int nodes = 5;
    vector<vector<int>> adjMatrix = {
        {0, 10, 0, 0, 3},
        {0, 0, 2, 0, 0},
        {0, 0, 0, 9, 0},
        {0, 0, 0, 0, 0},
        {0, 1, 8, 0, 0}};

    int source = 0;
    vector<int> distances = dijkstraUsingAdjMatrix(nodes, adjMatrix, source);

    for (int i = 0; i < nodes; i++)
    {
        cout << "Distance from node " << source << " to node " << i << " is " << distances[i] << endl;
    }

    return 0;
}
