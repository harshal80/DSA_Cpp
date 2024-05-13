#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.pop_back();
    cout << v.size() << endl;
    cout << v.capacity() << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "vector v is empty or not: " << v.empty();
    return 0;
}