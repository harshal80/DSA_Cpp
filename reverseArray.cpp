#include <iostream>
using namespace std;

int main()
{

    int size = 4, i, j = 1, temp;
    int a[size] = {9, 4, 5, 3};
    for (i = 0, j = size - 1; i < size / 2; i++, j--)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
