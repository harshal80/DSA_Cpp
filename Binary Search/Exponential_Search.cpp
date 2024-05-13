// Exponential Search :-
//  ex:- The infinite array to find the specific element that time use a Exponential search algorimthm
#include <iostream>
using namespace std;
int binarySearch(int arr[], int start, int end, int target)
{
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
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

int expSearch(int arr[], int size, int target)
{
    if (arr[0] == target)
    {
        return 0;
    }
    int i = 1;
    while (i < size && arr[i] <= target)
    {
        i = i * 2;
    }
    return binarySearch(arr, i / 2, min(i, size - 1), target);
}

int main()
{

    int arr[10] = {3, 4, 5, 6, 11, 13, 14, 15, 56, 70};
    int target = 13;
    int ans = expSearch(arr, 10, target);
    cout << ans;

    return 0;
}