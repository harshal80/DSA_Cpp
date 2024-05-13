#include <iostream>
using namespace std;

int findSqrt(int n)
{
    int target = n;
    int s = 0;
    int e = n;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (mid * mid == target)
        {
            return mid;
        }
        if (mid * mid > target)
        {
            // left search
            e = mid - 1;
        }
        else
        {
            // ans store
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{

    int n;
    cout << "Enter the number: " << endl;
    cin >> n;
    int ans = findSqrt(n);
    cout << "sqrt is : " << ans << endl;
    return 0;
}