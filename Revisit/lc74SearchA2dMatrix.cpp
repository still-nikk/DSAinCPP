#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{

    int s = 0;
    int e = matrix.size() * matrix[0].size() - 1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        int r = mid / matrix[0].size();
        int c = mid % matrix[0].size();

        if (matrix[r][c] == target)
        {
            return true;
        }
        else if (matrix[r][c] < target)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }

    return false;
    // int i = 0;
    // int j = 0;
    // int row = matrix.size();
    // int col = matrix[0].size();
    // while (i < row)
    // {

    //     if (matrix[i][col - 1] <= target)
    //     {
    //         if (matrix[i][col - 1] == target)
    //         {
    //             return true;
    //         }
    //         else
    //         {
    //             if (i == row - 1)
    //             {
    //                 break;
    //             }
    //             else
    //             {
    //                 i++;
    //             }
    //         }
    //     }
    //     else
    //     {
    //         break;
    //     }
    // }

    // while (j < col)
    // {
    //     if (matrix[i][j] <= target)
    //     {
    //         if (matrix[i][j] == target)
    //         {
    //             return true;
    //         }
    //         else
    //         {
    //             if (j == col - 1)
    //             {
    //                 break;
    //             }
    //             j++;
    //         }
    //     }
    //     else
    //     {
    //         break;
    //     }
    // }

    // return false;
}

int main()
{

    vector<vector<int>> matrix = {{1}};
    int target = 2;

    // cout << matrix.size() << " " << matrix[0].size() << endl;

    if (searchMatrix(matrix, target))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }

    return 0;
}