#include <bits/stdc++.h>
using namespace std;

//   1      //2 spaces
//  121     //1 space
// 12321

int main()
{

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        // left spaces
        for (int j = n - i - 1; j > 0; j--)
        {
            cout << " ";
        }
        // left digits
        for (int k = 1; k <= i; k++)
        {
            cout << k;
        }

        // right digits
        for (int l = i - 1; l >= 1; l--)
        {
            cout << l;
        }

        cout << endl;
    }

    return 0;
}