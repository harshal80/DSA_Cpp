#include <iostream>
using namespace std;

int binarysearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2; // Calculate mid within the loop

        if (arr[mid] == key)
        {
            return mid;
        }

        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int arr1[6] = {2, 4, 6, 7, 9, 22};
    int arr2[6] = {12, 11, 9, 7, 5, 3};

    int index1 = binarysearch(arr1, 6, 22);
    int index2 = binarysearch(arr2, 6, 3); // Changed the key to 12

    cout << "Index 22 is" << index1 << endl;
    cout << "Index 12 is" << index2 << endl;

    return 0;
}
