#include <iostream>
#include <stack>
using namespace std;

int main()
{

    stack<int> st;
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    cout << "top element of stack: " << st.top() << endl;
    cout << "size of stack: " << st.size() << endl;
    st.pop(); // remove the top elment in stack
    if (st.empty())
    {
        cout << "stack is empty " << endl;
    }
    else
    {
        cout << "stack is not empty" << endl;
    }
    // printing the stack
    cout << "ptrinting the stack elment top to bottam" << endl
         << endl;
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}