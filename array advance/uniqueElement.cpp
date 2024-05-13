#include <iostream>
#include <vector>
using namespace std;

int array(vector<int> v)
{
    int ans = 0;
    for (int i = 0; i < v.size(); i++)
    {
        ans = ans ^ v[i];
    }
    return ans;
}

int main()
{

    int n;
    // cout << "Enter the size of array" << endl;
    // cin >> n;
    vector<int> v;
    // cout << "Enter the array elemet :" << endl;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cin >> v[i];
    // }

    v.push_back(1);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(3);
    int ans = array(v);
    cout << "the unique elment is: " << ans;
    return 0;
}