#include <iostream>
#include <string.h>
using namespace std;

int getleth(char ch[])
{
    int i = 0;
    while (ch[i] != '\0')
    {
        i++;
    }
    return i;
}
void reverseArray(char name[])
{
    int s = 0;
    int size = getleth(name);
    int e = size - 1;
    while (s <= e)
    {
        swap(name[s], name[e]);
        s++;
        e--;
    }
}

int main()
{

    char name[20];
    cout << "Enter the name: ";
    cin.getline(name, 20);
    cout << "Before reverse string: " << name << endl;
    reverseArray(name);
    cout << "After reverse string: " << name << endl;

    return 0;
}