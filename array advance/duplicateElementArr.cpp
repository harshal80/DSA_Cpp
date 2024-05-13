#include <iostream>
#include <set>
using namespace std;

set<int> duplicte(int arr[], int size)
{
    set<int> st;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                st.insert(arr[i]);
            }
        }
    }
    return st;
}

int main()
{
    int arr[6] = {1, 2, 1, 2, 4, 1};
    set<int> ans = duplicte(arr, 6);
    for (int s : ans)
    {
        cout << s << " ";
    }
    return 0;
}