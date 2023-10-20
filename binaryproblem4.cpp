#include <iostream>
using namespace std;
// function to find the index of the target value or where it should be inserted
int checkIndex(int arr[], int size, int targete)
{
    int s = 0;
    int e = size - 1;

    while (s <= e)
    {
        int mid = s + e / 2;
        if (arr[mid] == targete)
        {
            return mid;
        }
        else if (arr[mid] < targete)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    // if the target is not found,'start' points to the position where it should be inserted.
    return s;
}

int main()
{

    int arr1[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int target;
    cout << "Enter the target element you have to check out: " << endl;
    cin >> target;
    int index = checkIndex(arr1, 8, target);
    cout << "target " << target << "should be inserted at index: " << index << endl;
    return 0;
}