#include <iostream>
using namespace std;

int *bubbleSort(int arr[], int size)
{
    for (int i = 1; i <= size; i++)
    {

        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    return arr;
}
int main()
{
    int arr1[6] = {3, 21, 5, 67, 2, 1};
    int *index = bubbleSort(arr1, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << index[i] << " ";
    }

    return 0;
}