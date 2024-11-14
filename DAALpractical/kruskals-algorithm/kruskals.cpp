#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Edge
{
    int u, v, weight;
    bool operator<(const Edge &other) const
    {
        return weight < other.weight;
    }
};

struct DSU
{
    vector<int> parent, rank;
    DSU(int n) : parent(n), rank(n, 0)
    {
        for (int i = 0; i < n; ++i)
            parent[i] = i;
    }
    int find(int x)
    {
        if (x != parent[x])
            parent[x] = find(parent[x]);
        return parent[x];
    }
    bool unite(int x, int y)
    {
        int rootX = find(x), rootY = find(y);
        if (rootX == rootY)
            return false;
        if (rank[rootX] < rank[rootY])
            swap(rootX, rootY);
        parent[rootY] = rootX;
        if (rank[rootX] == rank[rootY])
            ++rank[rootX];
        return true;
    }
};

int kruskal(int n, vector<Edge> &edges)
{
    sort(edges.begin(), edges.end());
    DSU dsu(n);
    int totalCost = 0;

    for (auto &edge : edges)
    {
        if (dsu.unite(edge.u, edge.v))
        {
            totalCost += edge.weight;
        }
    }

    return totalCost;
}

int main()
{
    int n = 5;
    vector<Edge> edges = {
        {0, 1, 2}, {0, 3, 6}, {1, 2, 3}, {1, 3, 8}, {1, 4, 5}, {2, 4, 7}};

    cout << "Total cost of MST: " << kruskal(n, edges) << endl;
    return 0;
}
