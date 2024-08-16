// Map stores the data in a key,value manner
// Only stores unique keys
// Stores the keys in a sorted manner

#include <bits/stdc++.h>
using namespace std;

int main()
{

    map<int, int> mp;
    mp[1] = 2;
    mp.insert({3, 4});
    mp.emplace(5, 6);

    for (auto x : mp)
    {
        cout << x.first << " " << x.second << endl;
    }

    cout << mp.size() << endl;
    // for (int i = 0; i < mp.size(); i++)
    // {
    //     cout << mp[i] << endl;
    // }

    auto it1 = mp.find(3);
    cout << it1->second << " " << endl;

    cout << mp.end()->first << endl;

    auto it2 = next(mp.end(), -1);
    cout << it2->first << " " << it2->second << endl;

    return 0;
}