#include <iostream>
#include <vector>
using namespace std;

vector<int> arr(int arr1[], int arr2[], int arr3[], int size)
{
    vector<int> v;
    for (int i = 0; i < size; i++)
    {

        int j = 0;
        for (j = 0; j < size; j++)
        {
            if (arr1[i] == arr2[j])
            {

                break;
            }
        }
        for (int k = 0; k < size; k++)
        {
            if (arr3[k] == arr2[j])
            {

                v.push_back(arr3[k]);
            }
        }
    }

    return v;
}

int main()
{

    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {5, 6, 7, 8, 3};
    int arr3[5] = {9, 10, 5, 11, 3};
    vector<int> ans = arr(arr1, arr2, arr3, 5);
    for (int i : ans)
    {
        cout << i << " ";
    }
    return 0;
}
