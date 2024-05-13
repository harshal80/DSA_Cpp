#include <iostream>
#include <algorithm>
using namespace std;

int first(int arr[], int size, int target)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] > target)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int last(int arr[], int size, int target)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] > target)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{

    int arr[7] = {1, 2, 2, 3, 3, 3, 5};
    int target = 3;
    int ocuFirst = first(arr, 7, target);
    int ocuLast = last(arr, 7, target);
    cout << " First ocurnce is : " << ocuFirst << endl;
    cout << " Last ocurnce is : " << ocuLast << endl;
    cout << endl;
    cout << endl;
    // using inbilt function to find First ocurnce and last ocurnce
    cout << "usnig inblit function " << endl;
    auto ans2 = lower_bound(arr, arr + 7, target);
    cout << "first occurnce is : " << ans2 - arr << endl;

    auto ans3 = upper_bound(arr, arr + 7, target);
    cout << "last occurnce is : " << ans3 - arr;

    return 0;
}