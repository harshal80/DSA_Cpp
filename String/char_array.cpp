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

int main()
{
    char name[20];
    cout << "Enter the name: ";
    cin.getline(name, 20);
    for (int i = 0; i < strlen(name); i++)
    {
        cout << i << ": index is : " << name[i] << endl;
    }

    cout << "Length of the string: " << getleth(name) << endl;
    cout << "Length of the string: " << strlen(name) << endl;

    return 0;
}