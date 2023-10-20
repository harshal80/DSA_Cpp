#include <iostream>
using namespace std;

int main()
{

    // int n, m;
    // cin >> n;
    // cin >> m;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= m; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {

    //     for (int j = n; j > i; j--)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - 1); j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}