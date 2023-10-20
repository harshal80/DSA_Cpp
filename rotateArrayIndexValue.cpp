#include <iostream>
#include <vector>
using namespace std;
vector<int> rotate(vector<int> arr, int k)
{

    // just to pratice the modulus approach
    int n = arr.size();
    vector<int> temp(n);
    for (int i = 0; i < n; i++)
    {
        temp[(i + k) % n] = arr[i];
    }
    arr = temp;
    cout << endl;
    return arr;
}

int main()
{

    int arr[6] = {1, 2, 3, 4, 5, 6};
    vector<int> v;
    for (int i = 0; i < 6; i++)
    {
        v.push_back(arr[i]);
    }
    vector<int> s = rotate(v, 3);
    for (int i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}