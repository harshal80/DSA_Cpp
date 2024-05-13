#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> v;
    cout << "Capacity=" << v.capacity() << endl; // capcity() can return space in vector means how many element can store in the vector

    v.push_back(1); // It is crose a vector limit the vector can creat a anothe vector can doubble size;
    cout << "Capacity=" << v.capacity() << endl;

    v.push_back(3);
    cout << "Capcity=" << v.capacity() << endl;
    cout << "Size is : " << v.size() << endl; // size can return number of element can present in vector

    cout << "Elent at 2ne Index" << v.at(2) << endl;

    cout << "Front : " << v.front() << endl;
    cout << "back" << v.back() << endl;

    cout << "before pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();
    cout << "after pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}