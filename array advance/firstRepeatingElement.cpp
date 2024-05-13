#include <iostream>
using namespace std;

int rep(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                return arr[i];
                // break;
            }
        }
    }
    return 0;
}

int main()
{

    int arr[5] = {1, 2, 3, 2, 3};
    int ind = rep(arr, 5);
    cout << ind;

    return 0;
}