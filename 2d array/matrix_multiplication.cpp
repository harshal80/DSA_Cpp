#include <iostream>
using namespace std;

void matrixmul(int arr[][3], int arr2[][3], int row, int col)
{

    int ans[4][4] = {0};

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            for (int k = 0; k < col; k++)
            {
                ans[i][j] += arr[i][k] * arr2[k][j];
            }
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{

    int arr[3][3] = {{1, 3, 4},
                     {4, 5, 6},
                     {7, 8, 9}};

    int arr2[3][3] = {{6, 9, 2},
                      {4, 6, 8},
                      {7, 5, 3}};

    matrixmul(arr, arr2, 3, 3);

    return 0;
}