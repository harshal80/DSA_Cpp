#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isPossibleSolution(vector<int> stalls, int aggresiveCows, int mid)
{
    int c = 1;
    int pos = stalls[0];
    for (int i = 1; i < stalls.size(); i++)
    {
        if (stalls[i] - pos >= mid)
        {
            c++;
            pos = stalls[i]; // one more cow has been placed.
        }
        if (c == aggresiveCows)
        {
            return true;
        }
    }
    return false;
}

int solve(vector<int> stalls, int size, int aggresiveCows)
{
    sort(stalls.begin(), stalls.end());
    int start = 0;
    int end = stalls[stalls.size() - 1] - stalls[0];
    int ans = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (isPossibleSolution(stalls, aggresiveCows, mid))
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{

    int arr[5] = {1, 2, 4, 8, 9};
    vector<int> stalls;
    for (int i = 0; i < 5; i++)
    {
        stalls.push_back(arr[i]);
    }
    int aggresiveCows = 3;
    int ans = solve(stalls, 5, aggresiveCows);
    cout << ans << endl;

    return 0;
}