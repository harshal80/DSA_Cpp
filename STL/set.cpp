#include <iostream>
#include <set>
using namespace std;

int main()
{

    set<int> s;

    s.insert(2);
    s.insert(2);
    s.insert(4);
    s.insert(4);
    s.insert(7);
    s.insert(1);
    s.insert(7);

    for (auto i : s)
    {
        cout << i << endl;
    }
    cout << endl;

    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);
    for (auto i : s)
    {
        cout << i << endl;
    }
    cout << endl;
    cout << "-4 is present or not : " << s.count(-4) << endl;

    return 0;
}