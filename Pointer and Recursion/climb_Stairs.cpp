#include <iostream>
using namespace std;
// ----------------- Leetcode question :- 70 (Climbing Stairs) -----------------------
// Example :-
// Input: n = 3
// Output: 3
// Explanation: There are three ways to climb to the top.
// 1. 1 step + 1 step + 1 step
// 2. 1 step + 2 steps
// 3. 2 steps + 1 step

int climbStairs(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    int ans = climbStairs(n - 1) + climbStairs(n - 2);
    return ans;
}

int main()
{

    int n;
    cout << "Enter the numbe : ";
    cin >> n;
    int ans = climbStairs(n);
    cout << ans << endl;

    return 0;
}