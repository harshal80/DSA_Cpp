#include <iostream>
using namespace std;

int find(int arr[], int size, int target)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        if (mid - 1 >= s && arr[mid - 1] == target)
        {
            return mid - 1;
        }
        if (mid + 1 <= e && arr[mid + 1] == target)
        {
            return mid + 1;
        }
        else if (target > arr[mid])
        {
            s = mid + 2;
        }
        else
        {
            e = mid - 2;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

int main()
{

    int arr[7] = {10, 2, 40, 20, 50, 80, 70};
    int target = 70;
    int ans = find(arr, 7, target);
    cout << "target index is : " << ans;
    return 0;
}