#include <iostream>
using namespace std;

void zeorleft(int arr[], int size)
{
    int notzero = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[notzero]);
            notzero++;
        }
    }
}

int main()
{

    int arr[7] = {1, 0, 1, 1, 0, 1, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    zeorleft(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}