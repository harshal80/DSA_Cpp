#include <iostream>
using namespace std;
class Stack
{
public:
    int *arr;
    int top;
    int size;
    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        top = -1;
    }

    // fucntion
    void push(int data)
    {
        if (top <= size)
        {
            // space available
            // insert
            top++;
            arr[top] = data;
        }
        else
        {
            // space not available
            cout << "Stack overflow" << endl;
        }
    }
    void pop()
    {
        if (top == -1)
        {
            // stack is empty
            cout << "stack underflow, cant delete element" << endl;
        }
        else
        {
            // stack is not empty
            top--;
        }
    }
    int getTop()
    {

        if (top == -1)
        {
            cout << "There is not element in stack " << endl;
        }
        else
        {
            return arr[top];
        }
    }

    int getSize()
    {

        return top + 1;
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
    st.push(10);
    st.push(15);
    st.push(20);
    st.push(25);

    while (!st.isEmpty())
    {
        cout << st.getTop() << " ";
        st.pop();
    }

    return 0;
}