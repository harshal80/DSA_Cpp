#include <iostream>
#include <string.h>
using namespace std;

string removeOccurrences(string s, string part)
{
    int pos = s.find(part);
    while (pos != string::npos)
    {
        s.erase(pos, part.length());
        pos = s.find(part);
    }
    return s;
}

int main()
{

    string str = "harshabcalabc";
    string substr = "abc";
    string ans = removeOccurrences(str, substr);
    cout << ans;

    return 0;
}