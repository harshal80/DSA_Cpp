#include <iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col)
{
    int index;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            if (arr[row][col] == target)
            {
                index = arr[row][col];
                return 1;
            }
        }
    }
    return 0;
}

int main()
{

    int arr[3][4] = {{1, 2, 11, 13}, {5, 6, 7, 8}, {9, 15, 20, 25}};
    // cout << "Enter the array element : ";
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }
    int key = 0;
    // cout << "Enter the Key :";
    // cin >> key;
    if (isPresent(arr, key, 3, 4))
    {
        cout << "Element found " << endl;
    }
    else
    {
        cout << "NOt found" << endl;
    }

    return 0;
}