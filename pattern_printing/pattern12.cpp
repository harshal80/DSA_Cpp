#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the Number: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        char a = '@' + n - i;
        for (int j = 0; j < i; j++)
        {

            cout << a << " ";
            a = a + 1;
        }
        cout << endl;
    }

    return 0;
}