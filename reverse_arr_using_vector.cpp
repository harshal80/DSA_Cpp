#include <iostream>
#include <vector>

using namespace std;

vector<int> arr(vector<int> v)
{
    vector<int> s;
    int s3 = 0, e = v.size() - 1;
    for (s3, e; s3 < e; s3++, e--)
    {
        swap(v[s3], v[e]);
        s = v;
    }
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    return s;
}

int main()
{

    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);
    v.push_back(8);
    vector<int> p = arr(v);
    for (int i : p)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}