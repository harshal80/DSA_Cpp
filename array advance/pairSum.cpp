#include <iostream>
using namespace std;
void sum(int arr[], int size, int sum)
{

    for (int i = 0; i < size; i++)
    {
        int element = arr[i];
        for (int j = i + 1; j < size; j++)
        {
            // cout << element << " " << arr[j] << endl;
            if (element + arr[j] == sum)
            {
                cout << element << " " << arr[j] << endl;
            }
        }
    }
}
int main()
{

    int arr[5] = {1, 7, 5, 4, 2};
    int add = 9;
    sum(arr, 5, add);

    return 0;
}