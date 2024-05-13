#include <iostream>
#include <string.h>
using namespace std;

int expandAroundIndex(string s, int i, int j)
{
    int cout = 0;
    // jab tak match karega,tab tak count increment kardo and i piche and j aaage kardo
    while (i >= 0 && j < s.length() && s[i] == s[j])
    {

        cout++;
        i--;
        j++;
    }
    return cout;
}

int coutSubstring(string s)
{
    int count = 0;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        // odd
        int oddKaAns = expandAroundIndex(s, i, i);
        count = count + oddKaAns;
        /// even
        int evenKaAns = expandAroundIndex(s, i, i + 1);
        count = count + evenKaAns;
    }
    return count;
}

int main()
{

    string s = "abc";
    int ans = coutSubstring(s);
    cout << ans;
    return 0;
}