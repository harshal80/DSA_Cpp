#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossibleSolution(vector<int> cooksRank, int np, int mid)
{
    int currp = 0; // initial cooked prata count
    for (int i = 0; i < cooksRank.size(); i++)
    {
        int r = cooksRank[i], j = 1;
        int timeTaken = 0;

        while (true)
        {
            if (timeTaken + j * r <= mid)
            {
                ++currp;
                timeTaken += j * r;
                ++j;
            }
            else
            {
                break;
            }
        }
        if (currp >= np)
        {
            return true;
        }
    }
    return false;
}

int minTimeCompleteOrder(vector<int> cooksRank, int np)
{
    int start = 0;
    int highestRank = *max_element(cooksRank.begin(), cooksRank.end());
    int end = highestRank * (np * (np + 1 / 2));
    int ans = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (isPossibleSolution(cooksRank, np, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{

    int nuberOfPrata = 10;
    int cooksRank[4] = {1, 2, 3, 4};
    vector<int> cooksRanks;
    for (int i = 0; i < 4; i++)
    {
        cooksRanks.push_back(cooksRank[i]);
    }
    cout << minTimeCompleteOrder(cooksRanks, nuberOfPrata);

    return 0;
}