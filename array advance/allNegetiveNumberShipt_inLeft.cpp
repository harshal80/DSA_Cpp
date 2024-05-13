#include <iostream>
using namespace std;

int shipt(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            swap(arr[s], arr[i]);
            s++;
        }
    }
}

int main()
{

    int arr[6] = {-1, -5, 3, -2, 0, -3};

    shipt(arr, 6);

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}