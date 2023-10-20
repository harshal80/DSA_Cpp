#include <iostream>
using namespace std;

int main()
{
    int size, i;
    cout << "Enter the array size";
    cin >> size;
    int arr[size];
    cout << "Enter the array elements: " << endl;
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "reverse array elementes: " << endl;
    for (i = size; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }

    return 0;
}