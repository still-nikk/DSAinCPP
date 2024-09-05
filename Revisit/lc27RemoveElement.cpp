#include <bits/stdc++.h>
using namespace std;

int removeElement(vector<int> &nums, int val)
{
    int k = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != val)
        {
            nums[k++] = nums[i];
        }
    }
    return k;
}

//My shitty approach
// int removeElement(vector<int>& nums, int val) {
//         if ( nums.empty() ) return 0;
//         if ( nums.size() == 1 && nums[0] == val ) return 0;
//         if ( nums.size() == 1 && nums[0] != val ) return 1;
//         int l = 0;
//         int r = nums.size() - 1;
//         int counter = 0;
//         while ( r > 0 && nums[r] == val ) {
//             counter++;
//             r--;
//         }
//         if ( r == 0 && nums[r] == val ) {
//             return 0;
//         }
//         while ( l <= r ) {
//             if ( l == r && nums[l] == val) {
//                 counter++;
//                 break;
//             }
//             if ( nums[l] == val ) {
//                 swap( nums[l], nums[r] );
//                 counter++;
//                 r--;
//                 l++;
//             } else {
//                 l++;
//             }
//             while ( r > 0 && nums[r] == val ) {
//                 counter++;
//                 r--;
//             }
//             if ( r == 0 && nums[r] == val ) {
//                 return 0;
//             }
//         }
//         return nums.size() - counter;
//     }

int main()
{
    // vector<int> nums = {0, 1, 2, 2, 3, 0, 4, 2};
    vector<int> nums = {0, 4, 4, 0, 4, 4, 4, 0, 2};
    int val = 4;
    int x = removeElement(nums, val);
    cout << x << endl;
    for (int i = 0; i < x; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}