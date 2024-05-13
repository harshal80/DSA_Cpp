#include <iostream>
using namespace std;

int find(int arr[], int size, int target, int s, int e)
{
    int mid = (s + e) / 2;
    // base case
    if (s > e)
    {
        return -1;
    }

    if (arr[mid] == target)
    {
        return mid;
    }

    else if (arr[mid] < target)
    {
        return find(arr, size, target, mid + 1, e);
    }

    else
    {
        return find(arr, size, target, s, mid - 1);
    }
}

int main()
{

    int arr[6] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 6;
    int s = 0;
    int e = size - 1;
    int ans = find(arr, 6, target, s, e);
    cout << ans;

    return 0;
}