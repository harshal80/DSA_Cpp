#include <iostream>
using namespace std;

int main()
{

    // int arr[5] = {12, 44, 16, 18, 29};
    // int *ptr3;
    // ptr3 = arr; // by ptr store the base address of arr means arr[0]
    // cout << arr << endl;
    // cout << ptr3 << endl;
    // cout << arr[0] << endl;

    // cout << *ptr3 << endl;
    // cout << endl;
    // cout << *arr << endl;
    // cout << *arr + 1 << endl;   // base address value incrsase to +1
    // cout << *(arr) + 1 << endl; // base address value incrsase to +1
    // cout << endl;

    // cout << *(arr) << endl;     // base address value arr[0]
    // cout << *(arr + 1) << endl; // base address increment to + 1 index :-  arr[1]
    // cout << *(arr + 2) << endl; // base address increment to + 2 index :-  arr[2]
    // cout << *(arr + 3) << endl; // base address increment to + 3 index  :- arr[3]
    // cout << *(arr + 4) << endl; // base address increment to + 4 index  :- arr[4]

    // int i = 0;
    // cout << arr[i] << endl; // arr[0] index well be print
    // cout << i[arr] << endl; // arr[0] index well be print

    // // size of array pointer
    // int arr1[10];
    // cout << "size of int  arr1[10] is :" << sizeof(arr1) << endl;
    // int *ptr;
    // ptr = arr1;
    // cout << "size of array pointer : " << sizeof(ptr);

    char ch[10] = "Harshal";
    char *chptr = ch;

    cout << ch << endl;
    cout << &ch << endl;
    cout << *(ch + 3) << endl;
    cout << chptr << endl;

    cout << &chptr << endl;
    cout << *(chptr + 3) << endl;
    cout << chptr + 2 << endl;
    cout << *chptr << endl;
    cout << chptr + 4 << endl;

    char cha = 'K';
    char *cptr = &cha;
    cout << cptr << endl; // jeva paryant null charter betat nahi teva parnt print karel te acutual value print jalya natar garbeg value print karel te

    char cname[10] = "Harshal"; // store in parmant sotrage
    cout << cname << endl;
    char *nameptr = "harshal"; // store the string is tempreary storage
    cout << nameptr << endl;
    return 0;
}