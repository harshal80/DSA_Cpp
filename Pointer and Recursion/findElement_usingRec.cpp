#include <iostream>
using namespace std;

int find(int arr[], int size, int i, int target)
{
    if (i >= size)
    {
        return -1;
    }
    if (arr[i] == target)
    {
        return i;
    }
    return find(arr, size, i + 1, target);
}

bool findch(string arr, int size, int i, char target)
{
    if (i >= size)
    {
        return false;
    }
    if (arr[i] == target)
    {
        return true;
    }
    return findch(arr, size, i + 1, target);
}

void printDigits(int n)
{
    if (n == 0)
    {
        return;
    }

    printDigits(n / 10);
    int digit = n % 10;
    cout << digit << " ";
}

int main()
{

    int arr[6] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 2;
    int i = 0;
    int ans = find(arr, size, i, target);
    cout << "index is " << ans << endl;

    string name = "Harshal";
    int size2 = name.length();
    char key = 's';
    bool chans = findch(name, size2, i, key);
    if (chans)
    {
        cout << "Elment found";
    }
    else
    {
        cout << "elment not found";
    }
    cout << endl;

    int number = 1392;
    printDigits(number);

    return 0;
}