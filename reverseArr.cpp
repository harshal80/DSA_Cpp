#include <iostream>
using namespace std;

int main()
{

    int size = 6;
    int a[size] = {5, 6, 43, 2, 6, 3}; // reaverse two interger in in two indexes
    int i, j = 1, temp;
    for (i = 0; i < size; i = i + 2)
    {
        if (i + 1 < size)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            j = j + 2;
        }
    }
    for (i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}