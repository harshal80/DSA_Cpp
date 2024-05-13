#include <iostream>
using namespace std;
void trenspose(int arr[][3], int row, int col, int brr[][3])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            brr[j][i] = arr[i][j];
            // cout << brr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{

    int arr[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};
    int brr[3][3];
    trenspose(arr, 3, 3, brr);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}