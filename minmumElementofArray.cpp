#include <iostream>
using namespace std;

int array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int minindex = i;
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j] < arr[minindex])
            {
                minindex = j;
            }
        }
        return arr[minindex];
    }
}

int main()
{

    int arr1[6] = {3, 4, 1, 7, 5, 8};
    cout << array(arr1, 6);

    return 0;
}