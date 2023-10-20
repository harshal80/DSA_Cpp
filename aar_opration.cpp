#include <iostream>
using namespace std;

void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapalt(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{

    int arrary[8] = {2, 4, 1, 5, 9, 6, 7, 8};
    swapalt(arrary, 8);
    printarr(arrary, 8);

    return 0;
}