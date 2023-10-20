#include <iostream>
using namespace std;

int main()
{

    int number;
    cout << "Enter the size of pattern: " << endl;
    cin >> number;
    for (int i = number; i <= number; i--)
    {

        for (int j = 0; j < i; j)
        {
            cout << " * ";
        }
        cout << endl;
    }

    return 0;
}