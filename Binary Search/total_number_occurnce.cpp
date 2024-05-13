// --------- Total number of occurnce in binarry search ---------- //

#include <iostream>
using namespace std;

int totaloccr(int arr[], int size, int target)
{
    int s = 0;
    int s1 = 0;
    int e1 = size - 1;
    int e = size - 1;
    int mid = (s + e) / 2;
    int mid2 = (s1 + e1) / 2;
    int ans1 = -1;
    int ans2 = -1;
    int ans = 0;
    while (s <= e)
    {
        if (arr[mid] == target)
        {
            ans1 = mid;
            e = mid - 1;
        }
        else if (arr[mid] < target)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = (s + e) / 2;
    }
    while (s1 <= e1)
    {
        if (arr[mid2] == target)
        {
            ans2 = mid2;
            s1 = mid2 + 1;
        }
        else if (arr[mid2] < target)
        {
            s1 = mid2 + 1;
        }
        else
        {
            e1 = mid2 - 1;
        }
        mid2 = (s1 + e1) / 2;
    }
    ans = ans2 - ans1 + 1;
    // cout << ans << endl;
    return ans;
}

int main()
{

    int arr[9] = {1, 2, 2, 3, 3, 3, 3, 3, 6};
    int anss = totaloccr(arr, 9, 3);
    cout << anss;

    return 0;
}