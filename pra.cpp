#include <iostream>
using namespace std;
class Solution
{
public:
    int arr(int arr[], int size)
    {
        int j = 0;
        for (int i = 0; i < size; i++)
        {
            j += arr[i];
        }
        return j;
    }
};
int main()
{
    Solution s;
    int arr1[4] = {3, 6, 3, 2};
    cout << s.arr(arr1, 4);

    return 0;
}