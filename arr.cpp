#include <iostream>
using namespace std;

// void fun(int arr[], int n)
// {
//     int j = 0;
//     for (int i = 0; i < n; i++)
//     {
//         j += arr[i];
//         cout << j << endl;
//     }
// }

// int main()
// {

//     int a[5] = {1, 23, 3, 4, 5};
//     fun(a, 5);

//     return 0;
// }

bool search(int arr[], int n, int key)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int a[10] = {2, 44, 55, 33, 22, 4, 7, 55, 8, 9};
    int key1;
    cout << "Enter the key";
    cin >> key1;
    int found;
    found = search(a, 10, key1);
    if (found)
    {
        cout << "key is present";
    }
    else
    {
        cout << "key is afsend";
    }
    return 0;
}