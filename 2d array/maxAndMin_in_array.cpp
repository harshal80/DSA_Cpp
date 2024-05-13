
#include <iostream>
#include <climits>
using namespace std;

int MaxAndMin(int arr[][4], int row, int col)
{
    int maxi = INT_MIN;
    int mini = INT_MAX;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (maxi < arr[i][j])
            {
                maxi = arr[i][j];
            }
            if (mini > arr[i][j])
            {
                mini = arr[i][j];
            }
        }
    }
    cout << "minimum number is : " << mini << endl;
    return maxi;
}

int main()
{

    int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int maxi = MaxAndMin(arr, 3, 4);
    cout << "max number is : " << maxi;

    return 0;
}