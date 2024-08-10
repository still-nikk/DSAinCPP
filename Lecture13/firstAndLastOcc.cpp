#include <bits/stdc++.h>
using namespace std;

int firstOcc(int arr[], int size, int key)
{
  int ans = -1;

  int start = 0, end = size - 1;
  int mid = start + (end - start) / 2;

  while (start <= end)
  {
    if (arr[mid] == key)
    {
      ans = mid;
      end = mid - 1;
    }
    else if (arr[mid] < key)
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
    mid = start + (end - start) / 2;
  }

  return ans;
}
int lastOcc(int arr[], int size, int key)
{
  int ans = -1;

  int start = 0, end = size - 1;
  int mid = start + (end - start) / 2;

  while (start <= end)
  {
    if (arr[mid] == key)
    {
      ans = mid;
      start = mid + 1;
    }
    else if (arr[mid] < key)
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
    mid = start + (end - start) / 2;
  }

  return ans;
}

int main()
{

  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int key;
  cout << "Enter the key: ";
  cin >> key;

  cout << "First Occurence of " << key << " is at index " << firstOcc(arr, n, key) << endl;
  cout << "Last Occurence of " << key << " is at index " << lastOcc(arr, n, key) << endl;
  cout << "Total number of Occurences of " << key << " are " << lastOcc(arr, n, key) - firstOcc(arr, n, key) + 1 << endl;

  return 0;
}