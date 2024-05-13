#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isPossibleSolution(vector<long long int> trees, long long int m, long long int mid)
{
    long long int woodCollected = 0;
    for (long long int i = 0; i < trees.size(); i++)
    {
        if (trees[i] > mid)
        {
            woodCollected += trees[i] - mid;
        }
    }
    return woodCollected >= m;
}
long long int maxSawBladeHeight(vector<long long int> trees, long long int m)
{
    long long int start = 0, end, ans = -1;
    end = *max_element(trees.begin(), trees.end());
    while (start <= end)
    {
        long long int mid = (start + end) / 2;
        if (isPossibleSolution(trees, m, mid))
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

    long long int m = 7;
    int arr[4] = {20, 15, 10, 17};
    vector<long long int> trees;
    for (int i = 0; i < 4; i++)
    {
        trees.push_back(arr[i]);
    }
    cout << maxSawBladeHeight(trees, m) << endl;
    return 0;
}