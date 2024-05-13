#include <iostream>
#include <string.h>
using namespace std;

bool compareString(string a, string b)
{
    if (a.length() != b.length())
    {
        return false;
    }
    else
    {

        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] != b[i])
            {
                return false;
            }
        }
    }
    return false;
}

int main()
{

    string str;
    cout << "Enter the String: ";
    // cin>>str;
    getline(cin, str);
    cout << str;

    // function in sting:

    cout << "Lenth: " << str.length() << endl;

    cout << "isEmpty: " << str.empty() << endl;

    str.push_back('A');
    cout << str << endl;

    str.pop_back();
    cout << str << endl;

    cout << str.substr(0, 4) << endl; // give to sub sting start indx to end endex can not afetc to orignal string

    string str2 = "harshal";
    string str3 = "harshal";
    if (str2.compare(str3) == 0)
    {
        cout << " str2 and str3 are exactly same stirngs" << endl;
    }
    else
    {
        cout << "str2 and str3 are not same" << endl;
    }

    string x = "abcd";
    string y = "bcda";
    cout << x.compare(y) << endl;
    bool ans = compareString(x, y);
    if (ans)
    {
        cout << "the string is equal " << endl;
    }
    else
    {
        cout << "string is not equal ";
    }

    // find function to find string and return index
    string sent = "hello i am harshal";
    string target = "am";
    // cout <<"am index is :"<< sent.find(target)<<endl;
    if (sent.find(target) == string::npos)
    {
        cout << "not found " << endl;
    }
    else
    {
        cout << "am index is :" << sent.find(target) << endl;
    }

    // replace to actucal string to another string:

    string strr = "This is my first program";
    string word = "Harshal";
    strr.replace(0, 4, word); // start to 0 index and end to 4th index and to chage the string
    cout << strr << endl;

    // erase function
    string stt = "ABCDEFGHIJKLNMOP";
    stt.erase(0, 4); // erase function to erase the strat index to end index to this range to erase
    cout << stt;

    return 0;
}