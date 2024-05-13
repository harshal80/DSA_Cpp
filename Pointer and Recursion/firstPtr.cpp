#include <iostream>
using namespace std;

int main()
{

    int a = 10;
    char ch = 'A';
    float fl = 0.299;
    double doub = 9.020020020;

    int *ptr;
    ptr = &a;
    char *chptr;
    chptr = &ch;
    float *flptr;
    flptr = &fl;
    double *doubptr;
    doubptr = &doub;
    // by defolt all pointer data type size is 4 or 8
    cout << sizeof(ptr) << endl;
    cout << sizeof(chptr) << endl;
    cout << sizeof(flptr) << endl;
    cout << sizeof(doubptr) << endl;

    int arr1[10];
    cout << "size of int  arr1[10]" << sizeof(arr1) << endl;
    int *ptr;
    ptr = arr1;
    cout << sizeof(ptr);

    cout << "&a is : " << &a << endl;
    cout << "a is : " << a << endl;
    cout << "ptr is : " << ptr << endl;
    cout << "&ptr is : " << &ptr << endl;
    cout << "*ptr is : " << *ptr << endl;

    // null pointer decleration:-

    // int *ptr1 = nullptr;
    // int *ptr2 = 0;
    // // null pointer not print becaue that is null;
    // cout << *ptr1 << endl;
    // cout << *ptr2 << endl;

    return 0;
}