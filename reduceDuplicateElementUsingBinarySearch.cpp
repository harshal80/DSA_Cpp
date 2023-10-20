#include <iostream>
using namespace std;

int removedup(int arr[], int size)
{
    if (size <= 1)
    {
        return size;
    }
    int newIndex = 1;
    for (int i = 1; i < size; ++i)
    {
        int s = 0;
        int e = newIndex - 1;
        bool duplicate = false;
        while (s <= e)
        {
            int mid = (s + e) / 2;
            if (arr[mid] == arr[i])
            {
                duplicate = true;
                break;
            }
            else if (arr[mid] < arr[i])
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
        if (!duplicate)
        {
            arr[newIndex] = arr[i];
            newIndex++;
        }
    }
    return newIndex;
}

int main()
{

    int arr1[8] = {1, 1, 2, 2, 3, 3, 6, 9};
    int newlength = removedup(arr1, 8);
    cout << "Array with duplicates removed: ";
    for (int i = 0; i < newlength; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    return 0;
}