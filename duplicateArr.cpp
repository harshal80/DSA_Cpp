#include <iostream>

using namespace std;
void check(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {

                cout << arr[i] << " ";
            }
        }
    }
}
int main()
{
    int arr1[] = {1, 2, 3, 4, 4, 5, 6, 77, 6, 6, 8};
    check(arr1, 11);
    return 0;
}