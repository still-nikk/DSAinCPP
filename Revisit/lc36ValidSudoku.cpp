#include <bits/stdc++.h>
using namespace std;

bool isValidSudoku(vector<vector<char>> &board)
{
    // rows
    for (int i = 0; i < 9; i++)
    {
        vector<bool> visited(9, false);
        for (int j = 0; j < 9; j++)
        {
            if (board[i][j] != '.') // Skip empty cells
            {
                int num = board[i][j] - '1'; // Convert char to int (e.g., '1' becomes 0)
                if (!visited[num])
                {
                    visited[num] = true;
                }
                else
                {
                    return false; // Duplicate found
                }
            }
        }
    }

    // columns
    for (int j = 0; j < 9; j++)
    {
        vector<bool> visited(9, false);
        for (int i = 0; i < 9; i++)
        {
            if (board[i][j] != '.')
            {
                int num = board[i][j] - '1';
                if (!visited[num])
                {
                    visited[num] = true;
                }
                else
                {
                    return false;
                }
            }
        }
    }

    // checking 3x3 subgrids
    for (int block = 0; block < 9; block++)
    {
        vector<bool> visited(9, false);
        int startRow = (block / 3) * 3;
        int startCol = (block % 3) * 3;

        for (int i = startRow; i < startRow + 3; i++)
        {
            for (int j = startCol; j < startCol + 3; j++)
            {
                if (board[i][j] != '.')
                {
                    int num = board[i][j] - '1';
                    if (!visited[num])
                    {
                        visited[num] = true;
                    }
                    else
                    {
                        return false;
                    }
                }
            }
        }
    }

    return true;
}



int main()
{
    vector<vector<char>> board = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};

    return 0;
}