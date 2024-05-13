#include <iostream>
#include <vector>
using namespace std;
vector<int> dup(int arr[], int brr[], int size1, int size2)
{
    vector<int> v;
    for (int i = 0; i < size1; i++)
    {

        for (int j = 0; j < size2; j++)
        {
            int elment = arr[i];
            if (elment == brr[j])
            {
                v.push_back(elment);
                brr[j] = -1;
            }
        }
    }
    return v;
}
int main()
{

    int arr[5] = {1, 2, 3, 4, 4};
    int brr[4] = {2, 3, 8, 4};
    vector<int> v = dup(arr, brr, 5, 4);
    for (int i : v)
    {
        cout << i << " ";
    }
    return 0;
}