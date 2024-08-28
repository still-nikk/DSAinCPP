#include <bits/stdc++.h>
using namespace std;

int compress(vector<char> &chars)
{
    if (chars.size() == 1)
        return 1;
    int i = 0;
    int last_idx = 0;

    while (i < chars.size())
    {
        char curr = chars[i];
        int curr_count = 0;
        while (i < chars.size() && chars[i] == curr)
        {
            i++;
            curr_count++;
        }
        chars[last_idx++] = curr;
        if (curr_count > 1)
        {
            for (char c : to_string(curr_count))
            {
                chars[last_idx++] = c;
            }
        }
    }
    return last_idx;
}

int main()
{
    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    cout << compress(chars) << endl;
    for (auto i : chars)
    {
        cout << i << " ";
    }
    return 0;
}