#include <iostream>
#include <string>
#include <ctime>

using namespace std;

void printboard(char board[3][3], int rows, int cols);

int main()
{
    char board[3][3] = {{'-', '-', '-'},
                        {'-', '-', '-'},
                        {'-', '-', '-'}};

    int rows = sizeof(board) / sizeof(board[0]);
    int cols = sizeof(board[0]) / sizeof(board[0][0]);

    printboard(board, rows, cols);

    int row;
    int col;

    cout << "enter a row (0-2): \n";
    cin >> row;
    cout << "enter a coloumn (0-2): ";
    cin >> col;

    board[row][col] = 'X';

    cout << "updated board: \n";
    printboard(board, rows, cols);

    return 0;
}
void printboard(char board[3][3], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << '\n';
    }
}
