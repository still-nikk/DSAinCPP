// Dynamic Array: VECTOR

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    vector<pair<int, int>> v1;
    v1.push_back({3, 4});
    v1.emplace_back(5, 6);

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i].first << " " << v1[i].second << endl;
    }

    vector<int> v2(5, 100);
    // NOTE THE BRACES !!!

    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl;

    // ITERATOR
    vector<int> v3 = {1, 2, 3, 4, 5};
    vector<int>::iterator it = v3.begin();
    cout << *(it) << " " << endl;
    it++;
    cout << *(it) << " " << endl;
    it += 2;
    cout << *(it) << " " << endl;
    vector<int>::iterator it2 = v3.end();
    // vector<int>::iterator it3 = v3.rend();
    // vector<int>::iterator it4 = v3.rbegin();
    cout << v3[1] << " = " << v3.at(1) << endl;
    cout << v3.front() << endl;
    cout << v3.back() << endl;

    for (vector<int>::iterator i = v3.begin(); i != v3.end(); i++)
    {
        cout << *(i) << " ";
    }
    cout << endl;

    for (auto i = v3.begin(); i != v3.end(); i++)
    {
        cout << *(i) << " ";
    }
    cout << endl;

    for (auto i : v3)
    {
        cout << i << " ";
    }
    cout << endl;

    vector<int> v4 = {2, 3, 4, 5, 6, 7, 8};
    v4.erase(v4.begin() + 1);
    for (auto i : v4)
    {
        cout << i << " ";
    }
    cout << endl;
    v4.erase(v4.begin() + 1, v4.begin() + 3);
    for (auto i : v4)
    {
        cout << i << " ";
    }
    cout << endl;

    vector<int> v5(2, 100);
    v5.insert(v5.begin(), 200);
    v5.insert(v5.begin() + 1, 5, 150);
    for (auto i : v5)
    {
        cout << i << " ";
    }
    cout << endl;

    v5.pop_back();
    for (auto i : v5)
    {
        cout << i << " ";
    }
    cout << endl;

    v5.swap(v4);
    for (auto i : v5)
    {
        cout << i << " ";
    }
    cout << endl;

    v4.swap(v5);
    v5.clear();
    for (auto i : v5)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}