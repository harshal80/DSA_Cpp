#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "enter the number: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        char value = 'A' + i;
        for (int j = 0; j < i; j++)
        {
            value = i - 1;
            cout << (value = value + 1) << " ";
        }
        cout << endl;
    }

    return 0;
}