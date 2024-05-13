#include <iostream>
#include <vector>
using namespace std;

// int kDiff(int arr[],int size,int target){
//     int s=0;
//     int e=size-1;
//     int mid=(s+e)/2;
//     while(s<=e){
//     if(arr[mid]==target){
//         return mid;
//     }
//     else if (target>arr[mid]){
//         s=mid+1;
//     }
//     else{
//         e=mid-1;
//     }
//     }
//     return -1;

// }
// int findPairs(vector<int>arr,int target){
//     sort(arr.begin(),arr.end());
//     set<pair<int,int>>ans;
//     for (int )
// }

int kDiff(int arr[], int size, int target)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (abs(arr[i] - arr[j]) == target)
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    int ans = kDiff(arr, 5, 4);
    cout << ans;
    return 0;
}