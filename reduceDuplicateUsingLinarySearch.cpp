#include <iostream>

using namespace std;

// Function to reduce duplicate elements in the sorted array and return the new length
int removeDuplicates(int arr[], int n)
{
    if (n <= 1)
    {
        return n; // No duplicates to remove
    }

    int newIndex = 1; // Index for the new array with duplicates removed

    for (int i = 1; i < n; ++i)
    {
        bool isDuplicate = false;

        // Linear search to check for duplicates
        for (int j = 0; j < newIndex; ++j)
        {
            if (arr[i] == arr[j])
            {
                isDuplicate = true;
                break; // Duplicate found
            }
        }

        if (!isDuplicate)
        {
            // If not a duplicate, add it to the new array
            arr[newIndex] = arr[i];
            newIndex++;
        }
    }

    return newIndex;
}

int main()
{
    int arr[] = {1, 1, 33, 4, 32, 6, 99, 73, 33, 99};
    int n = sizeof(arr) / sizeof(arr[0]);

    int newLength = removeDuplicates(arr, n);

    cout << "Array with duplicates removed: ";
    for (int i = 0; i < newLength; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
