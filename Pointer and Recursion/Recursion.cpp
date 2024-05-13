#include <iostream>
using namespace std;

int fact(int x)
{
    if (x == 1 || x == 0)
    {
        return 1;
    }
    else
    {
        return x * fact(x - 1);
    }
}

void print(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << " "; // tail recursion : 5,4,3,2,1
    print(n - 1);
    cout << endl;
    cout << n << " "; // head recursion : 1,2,3,4,5
}

int fibo(int n)
{
    if (n == 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }
    int ans = fibo(n - 1) + fibo(n - 2);
    return ans;
}

int main()
{

    // int n;
    // cout << "Enter the number : " << endl;
    // cin >> n;
    // int ans = fact(n);
    // cout << ans;

    // int n = 5;
    // print(n);

    int n = 9;
    int ans = fibo(n);
    cout << ans << endl;

    return 0;
}