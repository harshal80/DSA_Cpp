#include <iostream>
using namespace std;

int *array(int arr[], int size)
{
    for (int i = 0; i <= size - 1; i++)
    {
        int minindex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minindex])
            {
                minindex = j;
            }
        }; // swap function can library function
        // swap(arr[minindex], arr[i])

        // without using swap function :-
        int temp = arr[i];
        arr[i] = arr[minindex];
        arr[minindex] = temp;

        cout << arr[i] << " ";
    }
    cout << endl;
    return arr;
}

int main()
{

    int arr1[6] = {3, 4, 1, 7, 5, 8};
    int *arr2 = array(arr1, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << arr2[i] << " ";
    }

    return 0;
}