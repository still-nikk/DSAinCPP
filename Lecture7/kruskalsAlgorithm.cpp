#include <bits/stdc++.h>

using namespace std;

int findSet(int v, vector<int> &parent)
{
    if (v == parent[v])
        return v;
    return parent[v] = findSet(parent[v], parent); // Path compression
}

void unionSets(int a, int b, vector<int> &parent, vector<int> &rank)
{
    a = findSet(a, parent);
    b = findSet(b, parent);
    if (a != b)
    {
        if (rank[a] < rank[b])
            swap(a, b);
        parent[b] = a;
        if (rank[a] == rank[b])
            rank[a]++;
    }
}

int main()
{
    int n, m;
    cin >> n >> m; // n = number of vertices, m = number of edges

    vector<int> u(m), v(m), w(m); // Edge lists
    for (int i = 0; i < m; i++)
    {
        cin >> u[i] >> v[i] >> w[i];
        // Convert to 0-based index (optional depending on input)
        u[i]--;
        v[i]--;
    }

    // Create a vector of indices to sort edges by weight
    vector<int> indices(m);
    for (int i = 0; i < m; i++)
        indices[i] = i;

    sort(indices.begin(), indices.end(), [&](int i, int j)
         { return w[i] < w[j]; });

    vector<int> parent(n), rank(n, 0);
    for (int i = 0; i < n; i++)
        parent[i] = i;

    int cost = 0;
    vector<int> result_u, result_v, result_w;
    for (int i : indices)
    {
        int u_edge = u[i];
        int v_edge = v[i];
        int w_edge = w[i];
        if (findSet(u_edge, parent) != findSet(v_edge, parent))
        {
            cost += w_edge;
            result_u.push_back(u_edge);
            result_v.push_back(v_edge);
            result_w.push_back(w_edge);
            unionSets(u_edge, v_edge, parent, rank);
        }
    }

    cout << "Cost of MST: " << cost << endl;
    cout << "Edges in MST:" << endl;
    for (size_t i = 0; i < result_u.size(); i++)
    {
        cout << result_u[i] + 1 << " " << result_v[i] + 1 << " " << result_w[i] << endl; // Convert back to 1-based index
    }

    return 0;
}
