#include <iostream>
#include <string.h>
using namespace std;
bool check_pali(char name[])
{
    int s = 0;
    int size = strlen(name);
    int e = size - 1;
    while (s <= e)
    {
        if (name[s] != name[e])
        {
            return false;
        }
        else
        {
            s++;
            e--;
        }
    }
    return true;
}

int main()
{

    char name[20];
    cout << "entre the name to check palindrom or not: ";
    cin.getline(name, 20);

    if (check_pali(name))
    {
        cout << "pailndrom";
    }
    else
    {
        cout << "not palindrom";
    }
    return 0;
}