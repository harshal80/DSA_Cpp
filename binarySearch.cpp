#include <iostream>
using namespace std;

int binarysearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        // go to right wala part
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}

int main()
{

    int arr1[6] = {2, 4, 6, 7, 9, 22};
    int index1 = binarysearch(arr1, 6, 22);
    cout << "Index 22 is " << index1 << endl;

    return 0;
}