#include <iostream>
#include <limits.h>
using namespace std;

void printArr(int arr[], int size, int i)
{
    if (i >= size)
    {
        return;
    }
    cout << arr[i] << " ";
    printArr(arr, size, i + 1);

    // cout<<arr[i]<<" ";//revevse printing the elment of array
}

// another method
void printarr2(int arr[], int size)
{
    if (size == 0)
    {
        return;
    }
    cout << arr[0] << " ";

    printarr2(arr + 1, size - 1);
}

int main()
{

    int arr[6] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int i = 0;
    printArr(arr, size, i);
    cout << endl;
    printarr2(arr, size); // second method

    return 0;
}