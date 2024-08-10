/*
You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.

Return the index of the peak element.

Your task is to solve it in O(log(n)) time complexity.

Example 1:
Input: arr = [0,1,0]
Output: 1

Example 2:
Input: arr = [0,2,1,0]
Output: 1

Example 3:
Input: arr = [0,10,5,2]
Output: 1
*/

#include <bits/stdc++.h>
using namespace std;

int peakIndexInMountainArray(vector<int> &arr)
{
  int start = 0;
  int end = arr.size() - 1;
  int mid = start + (end - start) / 2;
  while (start < end)
  {
    if (arr[mid] < arr[mid + 1])
    {
      start = mid + 1;
    }
    else
    {
      end = mid;
    }
    mid = start + (end - start) / 2;
  }
  return mid;
}

int main()
{
  vector<int> arr = {0, 10, 5, 2};
  cout << peakIndexInMountainArray(arr) << endl;
  return 0;
}