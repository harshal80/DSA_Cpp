#include <iostream>

using namespace std;

int MaxRowSum(int arr[][4], int row, int col)
{
    int maxi = INT_FAST8_MIN;
    int rowindex = -1;
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum += arr[i][j];
        }
        if (sum > maxi)
        {
            maxi = sum;
            rowindex = i;
        }
    }
    cout << "the Maximum sum is : " << maxi << endl;
    return rowindex;
}

int main()
{
    int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int a = MaxRowSum(arr, 3, 4);
    cout << a;
    return 0;
}