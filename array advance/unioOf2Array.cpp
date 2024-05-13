#include <iostream>
#include <vector>
using namespace std;
vector<int> uni(int arr[], int brr[], int size1, int size2)
{
    vector<int> v;
    for (int i = 0; i < size1; i++)
    {
        v.push_back(arr[i]);
    }
    for (int i = 0; i < size2; i++)
    {
        v.push_back(brr[i]);
    }
    return v;
}

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    int brr[3] = {6, 7, 8};
    vector<int> v;
    v = uni(arr, brr, 5, 3);
    for (int i : v)
    {
        cout << i << " ";
    }
    return 0;
}