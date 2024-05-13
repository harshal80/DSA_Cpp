#include <iostream>
#include <map>
using namespace std;

int main()
{

    map<int, string> s;
    s[1] = "Harshal";
    s[13] = "Arshil";
    s[2] = "yogesh";

    s.insert({5, "tushar"});

    cout << "before erase" << endl;
    for (auto i : s)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << "finding 13: " << s.count(13) << endl;

    cout << "after erase : " << endl;
    for (auto i : s)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << endl;

    auto it = s.find(3);
    for (auto i = it; i != s.end(); i++)
    {
        cout << (*i).first << endl;
    }
    return 0;
}