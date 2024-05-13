#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the Number: ";
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            char a = 'A' + i - 1;
            cout << a << " ";
        }
        cout << endl;
    }

    return 0;
}