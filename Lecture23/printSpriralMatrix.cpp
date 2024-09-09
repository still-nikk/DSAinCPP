#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    int rows = matrix.size();
    int columns = matrix[0].size();

    int rightRowWall = columns;
    int leftRowWall = -1;
    int bottomColWall = rows;
    int topColWall = -1;

    vector<int> ans;
    int i = 0;
    int j = 0;
    int one = 1;
    int count = 0;
    while (count < (rows * columns))
    {
        if (one > 0)
        {
            i = leftRowWall + 1;
            j = topColWall + 1;
            while (count < (rows * columns) && j < rightRowWall)
            {
                ans.push_back(matrix[i][j++]);
                count++;
            }
            topColWall++;

            i = topColWall + 1;
            j = rightRowWall - 1;
            while (count < (rows * columns) && i < bottomColWall)
            {
                ans.push_back(matrix[i++][j]);
                count++;
            }
            rightRowWall--;
        }
        else
        {
            i = bottomColWall - 1;
            j = rightRowWall - 1;
            while (count < (rows * columns) && j > leftRowWall)
            {
                ans.push_back(matrix[i][j--]);
                count++;
            }
            bottomColWall--;

            i = bottomColWall - 1;
            j = leftRowWall + 1;
            while (count < (rows * columns) && i > topColWall)
            {
                ans.push_back(matrix[i--][j]);
                count++;
            }
            leftRowWall++;
        }
        one *= -1;
    }
    return ans;
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (auto i : spiralOrder(matrix))
    {
        cout << i << " ";
    }
    return 0;
}