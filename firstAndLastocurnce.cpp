#include <iostream>
using namespace std;

int firstocc(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid]) // right me jao
        {
            s = mid + 1;
        }
        else if (key < arr[mid]) // left me jao
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int lastocc(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{

    int arr1[7] = {1, 2, 3, 3, 3, 3, 5};
    cout << "First Occurrence of 3 is at Index   " << firstocc(arr1, 7, 3) << endl;
    cout << "Last Occurrence of 3 is at Index  " << lastocc(arr1, 7, 3) << endl;

    return 0;
}