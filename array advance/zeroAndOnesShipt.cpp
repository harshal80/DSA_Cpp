#include <iostream>
#include <vector>
using namespace std;
vector<int> shipt(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    int i = 0;
    vector<int> v;
    // vector<int>v1;
    while (i != e)
    {
        if (arr[i] == 0)
        {

            swap(arr[s], arr[i]);
            i++;
            s++;
        }
        else
        {

            swap(arr[i], arr[e]);
            e--;
        }
    }
    for (int i = 0; i < size; i++)
    {
        v.push_back(arr[i]);
    }
    return v;
}

int main()
{

    int arr[6] = {1, 0, 1, 0, 1, 1};
    vector<int> v = shipt(arr, 6);
    for (int i : v)
    {
        cout << i << " ";
    }

    return 0;
}