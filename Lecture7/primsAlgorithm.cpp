// #include <bits/stdc++.h>
// using namespace std;

// int n, m;
// const int N = 1e5 + 3;
// vector<pair<int, int>> g[N]; // Change: vector of pairs for the graph
// int cost = 0;
// int INF = 1e9;

// vector<int> dist(N), parent(N);
// vector<bool> visited(N, false);

// void primsMST(int source)
// {
//     for (int i = 0; i < n; i++)
//     {
//         dist[i] = INF;
//     }
//     set<pair<int, int>> s; // Change: set of pairs (distance, vertex)
//     dist[source] = 0;
//     s.insert({0, source});

//     while (!s.empty())
//     {
//         auto x = *(s.begin());
//         s.erase(x);
//         visited[x.second] = true;
//         int u = x.second;
//         int v = parent[x.second];
//         int w = x.first;
//         cout << u << " " << v << " " << w << endl;
//         cost += w;
//         for (auto it : g[x.second])
//         {
//             if (visited[it.first])
//             {
//                 continue;
//             }
//             if (dist[it.first] > it.second)
//             {
//                 s.erase({dist[it.first], it.first});
//                 dist[it.first] = it.second;
//                 s.insert({dist[it.first], it.first}); // Corrected insertion
//                 parent[it.first] = x.second;
//             }
//         }
//     }
// }

// int main()
// {
//     cin >> n >> m;
//     for (int i = 0; i < m; i++)
//     {
//         int u, v, w;
//         cin >> u >> v >> w;
//         g[u].push_back({v, w});
//         g[v].push_back({u, w});
//     }

//     primsMST(0);
//     cout << cost << endl;

//     return 0;
// }

// // 4 5
// // 0 1 10
// // 1 2 15
// // 0 2 5
// // 3 1 2
// // 3 2 40

#include <bits/stdc++.h>
using namespace std;

#define V 5

int minKey(int key[], bool mstSet[])
{
    int min = INT_MAX, min_index;

    for (int v = 0; v < V; v++)
        if (mstSet[v] == false && key[v] < min)
            min = key[v], min_index = v;

    return min_index;
}

void printMST(int parent[], int graph[V][V])
{
    cout << "Edge \tWeight\n";
    for (int i = 1; i < V; i++)
        cout << parent[i] << " - " << i << " \t"
             << graph[i][parent[i]] << " \n";
}

void primMST(int graph[V][V])
{
    int parent[V];
    int key[V];
    bool mstSet[V];

    for (int i = 0; i < V; i++)
        key[i] = INT_MAX, mstSet[i] = false;

    key[0] = 0;
    parent[0] = -1;

    for (int count = 0; count < V - 1; count++)
    {
        int u = minKey(key, mstSet);
        mstSet[u] = true;

        for (int v = 0; v < V; v++)
            if (graph[u][v] && mstSet[v] == false && graph[u][v] < key[v])
                parent[v] = u, key[v] = graph[u][v];
    }
    printMST(parent, graph);
}

int main()
{
    int graph[V][V] = {{0, 2, 0, 6, 0},
                       {2, 0, 3, 8, 5},
                       {0, 3, 0, 0, 7},
                       {6, 8, 0, 0, 9},
                       {0, 5, 7, 9, 0}};

    primMST(graph);

    return 0;
}
