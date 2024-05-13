// ex:- array of book arr[i]-> number of page in that book
#include <iostream>
#include <numeric>
using namespace std;

bool PossibleSolution(int arr[], int size, int student, int sol)
{
    int pagesum = 0;
    int c = 1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > sol)
        {
            return false;
        }
        if (pagesum + arr[i] > sol)
        {
            c++;
            pagesum = arr[i];
            if (c > student)
            {
                return false;
            }
        }
        else
        {
            pagesum += arr[i];
        }
    }
    return true;
}

// function to find minimum number of pages.
int findPages(int arr[], int size, int student)
{
    if (student > size)
    {
        return -1;
    }
    int start = 0;
    int end = accumulate(arr, arr + size, 0); // accumulate is part of <numeric> header and is used to calculate the sum of elements in range .
    int ans = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (PossibleSolution(arr, size, student, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{

    int arr[4] = {12, 34, 67, 90};
    int numberOfSutdent = 2;
    int ans = findPages(arr, 4, numberOfSutdent);
    cout << ans << endl;

    return 0;
}

/*
    explanation : -

     allocate the book number of student
     arr[4]={12,34,67,90}

    number of book is =4
    arr[i] number of page in that book
    student =2

   student1=  12 | student2= 34,67,90  1st student can give to 1 book and second student give to 3 book
            second student can maxpage = 191 and 1st student is 12

   student1=  12,34 | student2= 67,90  1st student can give to 2 book and second student give to 2 book
            second student can maxpage = 157 and 1st student is 46

   student1=  12,34,67 | student2= 90  1st student can give to 3 book and second student give to 1 book
            first student maxpage = 113 and second is 90

   then find the  minimum number of page allocate to 1 student

   then the final answer is : 113

*/