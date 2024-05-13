#include <iostream>
#include <algorithm>
using namespace std;

int search(int arr[], int size, int target)
{
    int s = 0;
    int e = size - 1;
    int mid = s + e / 2;
    while (s <= e)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + e / 2;
    }
    return 0;
}

int main()
{

    int arr[6] = {1, 2, 3, 4, 5, 6};
    int key = 3;
    int find = search(arr, 6, key);
    cout << find << endl
         << endl;

    // inbilt function binary serch
    cout << " usning inbilt function " << endl;

    int ans = binary_search(arr, arr + 6, 3);

    // it will return true and false like 0 and 1;
    cout << ans;
    if (binary_search(arr, arr + 6, 8))
    {
        cout << "found" << endl;
    }
    else
    {
        cout << "not found" << endl;
    }

    return 0;
}