#include <iostream>
#include <vector>
using namespace std;

vector<int> waveprint(int arr[][5], int row, int col)
{
    for (int i = 0; i < col; i++)
    {
        // even case to print --> top to Bottam.
        if (i % 2 == 0)
        {
            for (int j = 0; j < row; j++)
            {
                cout << arr[j][i] << " ";
            }
        }
        else
        {
            // odd case to print -->Bottam to top
            for (int j = row - 1; j >= 0; j--)
            {
                cout << arr[j][i] << " ";
            }
        }
    }
}

int main()
{

    int arr[3][5] = {{1, 2, 3, 4, 5},
                     {6, 7, 8, 9, 10},
                     {11, 12, 13, 14, 15}};
    waveprint(arr, 3, 5);

    return 0;
}