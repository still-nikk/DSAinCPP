#include <iostream>
#include <vector>

using namespace std;

bool isSafe(vector<string> &board, int row, int col, int n)
{
    for (int i = 0; i < row; i++)
        if (board[i][col] == 'Q')
            return false;

    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
        if (board[i][j] == 'Q')
            return false;

    for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++)
        if (board[i][j] == 'Q')
            return false;

    return true;
}

void solveNQueens(int row, vector<string> &board, int n, vector<vector<string>> &solutions)
{
    if (row == n)
    {
        solutions.push_back(board);
        return;
    }

    for (int col = 0; col < n; col++)
    {
        if (isSafe(board, row, col, n))
        {
            board[row][col] = 'Q';
            solveNQueens(row + 1, board, n, solutions);
            board[row][col] = '.';
        }
    }
}

vector<vector<string>> nQueens(int n)
{
    vector<vector<string>> solutions;
    vector<string> board(n, string(n, '.'));
    solveNQueens(0, board, n, solutions);
    return solutions;
}

int main()
{
    int n = 4;
    vector<vector<string>> solutions = nQueens(n);

    cout << "Solutions:\n";
    for (auto &solution : solutions)
    {
        for (string row : solution)
        {
            cout << row << endl;
        }
        cout << endl;
    }

    return 0;
}
