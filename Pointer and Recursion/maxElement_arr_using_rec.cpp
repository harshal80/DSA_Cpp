#include <iostream>
#include <limits.h>
using namespace std;

void maxElement(int arr[], int size, int i, int &maxi) // &without & oprator maxi is local it is not INT_MIN that way paas by refrense
{
    if (i >= size)
    {
        return;
    }
    if (arr[i] > maxi)
    {
        maxi = arr[i];
    }
    maxElement(arr, size, i + 1, maxi);
}

void miniElement(int arr[], int size, int i, int &mini)
{
    if (i >= size)
    {
        return;
    }
    if (arr[i] < mini)
    {
        mini = arr[i];
    }
    miniElement(arr, size, i + 1, mini);
}

int main()
{

    int arr[6] = {2, 10, 6, 7, 4, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    int maxi = INT_MIN;
    maxElement(arr, size, i, maxi);
    cout << "max elment is : " << maxi << endl;
    int mini = INT_MAX;

    miniElement(arr, size, i, mini);
    cout << "minimum elment is : " << mini;

    return 0;
}