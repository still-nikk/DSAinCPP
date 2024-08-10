#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> findTriplets(vector<int> arr, int n, int K) {
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());

    // for (int i = 0; i < n - 2; i++) {
    //     // Avoid duplicates for the first element
    //     if (i > 0 && arr[i] == arr[i - 1]) continue;
        
    //     int left = i + 1;
    //     int right = n - 1;

    //     while (left < right) {
    //         int sum = arr[i] + arr[left] + arr[right];
    //         if (sum == K) {
    //             ans.push_back({arr[i], arr[left], arr[right]});

    //             // Avoid duplicates for the second and third elements
    //             while (left < right && arr[left] == arr[left + 1]) left++;
    //             while (left < right && arr[right] == arr[right - 1]) right--;

    //             left++;
    //             right--;
    //         } else if (sum < K) {
    //             left++;
    //         } else {
    //             right--;
    //         }
    //     }
    // }

    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    for ( int i = 0 ; i< n; i++)
    {
        if ( i > 0 && arr[i] == arr[i-1])
        {
            continue;
        }
        int left = i+1;
        int right = n-1;

        while ( left < right ) {
            int sum = arr[i] + arr[left] + arr[right];
            if ( sum == K) {
                vector<int> temp;
                temp.push_back(arr[i]);
                temp.push_back(arr[left]);
                temp.push_back(arr[right]);
                ans.push_back(temp);

                while ( left < right && arr[left] == arr[left+1])
                {
                    left++;
                }
                while( left < right && arr[right] == arr[right-1])
                {
                    right--;
                }
                left++;
                right--;
            } else if ( sum < K)
            {
                left++;
            } else {
                right--;
            }
        }
    }

    return ans;
}

int main() {
    vector<int> arr = {1, 2, -3, 4, -2, -1, 1, 3, -4};
    int K = 0;
    vector<vector<int>> ans = findTriplets(arr, arr.size(), K);

    if (ans.empty()) {
        cout << "-1";
    } else {
        for (int i = 0; i < ans.size(); i++) {
            for (int j = 0; j < ans[i].size(); j++) {
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
