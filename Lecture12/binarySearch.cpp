#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int key, int size)
{
  int l = 0, h = size - 1;
  int m = l + ( h - l ) / 2;
  while (l <= h)
  {
    if (arr[m] == key)
    {
      return m + 1;
    }
    else if (arr[m] < key)
    {
      l = m + 1;
    }
    else
    {
      h = m - 1;
    }
    // m = (l + h) / 2;
    //OPTIMIZATION
    m = l + ( h - l ) / 2;
  }
  return -1;
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
  cout << "Enter the key to search: ";
  int key;
  cin >> key;
  if (binarySearch(arr, key, n) == -1)
  {
    cout << "Not found!" << endl;
  }
  else
  {
    cout << key << " was found at " << binarySearch(arr, key, n) << " index!" << endl;
  }
  return 0;
}