#include <bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>> &matrix)
{
    // transposing the matrix
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = i + 1; j < matrix.size(); j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    // Reversing the rows
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix.size() / 2; j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][matrix.size() - j - 1];
            matrix[i][matrix.size() - j - 1] = temp;
        }
    }
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3},
                                  {4, 5, 6},
                                  {7, 8, 9}};
    cout << "Matrix Before Rotation: " << endl;
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix.size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    rotate(matrix);
    cout << "Matrix After Rotation: " << endl;
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix.size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}