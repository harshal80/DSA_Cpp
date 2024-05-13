#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the Number: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int space = n - i;

        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n; j++)
        {
            cout << j;
        }
        for (int j = n - 1; j > n; j--)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}