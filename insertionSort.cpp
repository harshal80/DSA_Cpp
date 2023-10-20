#include <iostream>
using namespace std;
int *InsertionSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {

            if (arr[j] > temp)
            {
                // shift
                arr[j + 1] = arr[j];
            }
            else
            {
                // ruk jao
                break;
            }
        }
        arr[j + 1] = temp;
    }
    return arr;
}
int main()
{

    int arr1[6] = {4, 2, 1, 7, 5, 0};
    int *index = InsertionSort(arr1, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << index[i] << " ";
    }
    return 0;
}