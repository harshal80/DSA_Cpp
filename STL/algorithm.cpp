#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    cout << "findling 2: " << binary_search(v.begin(), v.end(), 3) << endl;

    cout << "Lower bound: " << lower_bound(v.begin(), v.end(), 3) - v.begin() << endl;
    cout << "upper bound: " << upper_bound(v.begin(), v.end(), 3) - v.begin() << endl;

    int a = 3;
    int b = 5;

    cout << "max : " << max(a, b);
    cout << "min : " << min(a, b);
    swap(a, b);
    cout << endl
         << "a: " << a << endl;

    string abcd = "abcd";
    reverse(abcd.begin(), abcd.end());
    cout << "string : " << abcd << endl;

    rotate(v.begin(), v.begin() + 1, v.end());
    cout << "after rotate: " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }

    return 0;
}