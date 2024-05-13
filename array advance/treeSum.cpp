#include <iostream>
#include <vector>
using namespace std;
vector<int> sum(int arr[], int size)
{
    int sum = 9;
    for (int i = 0; i < size; i++)
    {
        int element = arr[i];
        for (int j = i + 1; j < size; j++)
        {
            int element2 = arr[j];
            for (int k = j + 1; k < size; k++)
            {

                if (element + element2 + arr[k] == sum)

                {

                    cout << element << " " << element2 << " " << arr[k] << endl;
                }
            }
        }
    }
}
int main()
{

    int arr[8] = {1, 7, 5, 4, 1, 3, 5, 4};
    vector<int> v = sum(arr, 8);

    return 0;
}