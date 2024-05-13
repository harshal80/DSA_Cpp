#include <iostream>
using namespace std;

class Stack
{
public:
    int *arr, top, size;
    Stack(int size)
    {
        arr = new int[size];
        top = -1;
        this->size = size;
    }
    void push(int val)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = val;
        }
        else
        {
            cout << "stack is overfllow" << endl;
        }
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "stack is empty you can pop the varible" << endl;
        }
        else
        {
            top--;
        }
    }
    int peek()
    {
        if (top == -1)
        {
            cout << "stack is empty " << endl;
        }
        else
        {
            return arr[top];
        }
    }
    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{

    Stack st(10);
    st.push(2);
    st.push(5);
    st.push(10);
    st.push(13);

    while (!st.isEmpty())
    {
        cout << st.peek() << " ";
        st.pop();
    }

    return 0;
}