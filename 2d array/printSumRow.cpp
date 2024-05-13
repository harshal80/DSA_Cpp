#include <iostream>
using namespace std;

void printSum(int arr[][4], int row, int col)
{
    cout << "Printing Sum -->" << endl;
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
    cout << endl;
}

int main()
{

    int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    printSum(arr, 3, 4);

    return 0;
}