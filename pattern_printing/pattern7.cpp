#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the number: ";
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {

            char a = 'A' + i - 1;
            cout << a;
        }
        cout << endl;
    }

    return 0;
}