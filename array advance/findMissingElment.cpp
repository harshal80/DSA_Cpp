#include <iostream>
using namespace std;

void find(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int index = abs(a[i]);
        if (a[index - 1] > 0)
        {
            a[index - 1] *= -1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            cout << i + 1 << " ";
        }
    }
}

int main()
{

    int arr[5] = {1, 2, 5, 5, 6};
    find(arr, 5);

    return 0;
}