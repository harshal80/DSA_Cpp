#include <iostream>
using namespace std;

bool search(int arr[][4], int row, int col, int target)
{
    int s = 0;
    int e = row * col - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        int rowindex = mid / col;
        int colindex = mid % col;
        if (arr[rowindex][colindex] == target)
        {
            cout << "Found at : " << rowindex << " " << colindex << endl;
            return true;
        }
        if (arr[rowindex][colindex] < target)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return false;
}

int main()
{

    int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int row = 3;
    int col = 4;
    int target = 6;
    bool ans = search(arr, row, col, target);
    if (ans)
    {
        cout << "Found " << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    return 0;
}