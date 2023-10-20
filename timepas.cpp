#include <iostream>
using namespace std;

int main()
{

    int arr1[] = {1, 2, 3, 4, 5, 3};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {5, 6, 7, 8, 9, 5, 4};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int size = size1 + size2;
    int mar[size];
    for (int i = 0; i < size1; i++)
    {
        mar[i] = arr1[i];
    }
    for (int i = 0; i < size2; i++)
    {
        mar[size1 + 1] = arr2[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << mar[i] << " ";
    }
    return 0;
}