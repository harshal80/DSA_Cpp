#include <iostream>
using namespace std;

int missing(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    int mid = (s + e) / 2;
    while (s <= e)
    {

        if (arr[mid] != mid + 1)
            e = mid - 1;
        else
            s = mid + 1;

        mid = (s + e) / 2;
    }

    return s + 1;
}

int main()
{
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 9, 10};
    int miss = missing(arr, 9);

    cout << "The missing element is: " << miss << endl;

    return 0;
}

// #include <iostream>
// using namespace std;

// int missing(int arr[], int size)
// {
//     int total = 0;
//     int ans = 0;
//     for (int i = 0; i < size; i++)
//     {
//         total = arr[i];
//     }
//     for (int i = 0; i < size; i++)
//     {
//         ans += i;
//         cout << ans << endl;
//     }

//     return ans - total;
// }

// int main()
// {

//     int arr[5] = {1, 2, 3, 5, 6};
//     int miss = missing(arr, 5);
//     cout << miss;

//     return 0;
// }