#include <iostream>
#include <numeric>
using namespace std;

bool PossibleSolution(int arr[], int size, int painters, long long mid)
{
    long long timesum = 0;
    int c = 1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > mid)
        {
            return false;
        }
        if (arr[i] + timesum > mid)
        {
            c++;
            timesum = arr[i];
            if (c > painters)
            {
                return false;
            }
        }
        else
        {
            timesum += arr[i];
        }
    }
    return true;
}

// function to find minimum number of pages.
long long minTime(int arr[], int size, int painters)
{
    long long start = 0;
    long long end = 0;
    for (int i = 0; i < size; i++)
    {
        end += arr[i];
    }
    long long ans = -1;
    while (start <= end)
    {
        long long mid = (start + end) / 2;
        if (PossibleSolution(arr, size, painters, mid))
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

    int arr[5] = {5, 10, 30, 20, 15};
    int painters = 3;
    int ans = minTime(arr, 5, painters);
    cout << ans << endl;

    return 0;
}
