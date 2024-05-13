#include <iostream>
using namespace std;

void solve(int arr[]) // you pasing the array that means the pasing the pointer that way this array size will math with pointer size
{                     // you passing with refrense
    cout << "size of inside function :  " << sizeof(arr) << endl;
    cout << "arr: " << arr << endl;
    cout << "&arr  " << &arr << endl;
    arr[0] = 50;
}

void update(int *ptr)
{
    cout << "address stored inside ptr is : " << ptr << endl;
    cout << "address of ptr is : " << &ptr << endl;
    *ptr = *ptr + 10;
}
int main()
{

    int arr[10] = {1, 2, 3, 4};
    cout << sizeof(arr) << endl;

    // printing the array inside the main function
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << endl
         << endl;
    cout << "colling function" << endl;
    solve(arr);

    cout << "after calling funciton " << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int a = 5;
    int *ptr = &a;

    cout << "address store in ptr is : " << ptr << endl;
    cout << "Address of ptr is : " << ptr << endl;
    update(ptr);
    cout << "value of a : " << a << endl;
    return 0;
}