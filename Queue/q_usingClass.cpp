#include <iostream>
using namespace std;

class Q
{
public:
    int size;
    int *arr;
    int rear;
    int front;
    Q(int size)
    {
        this->size = size;
        arr = new int[size];
        rear = 0;
        front = 0;
    }
    void push(int val)
    {
        if (rear == size)
        {
            cout << "q is full " << endl;
        }
        else
        {
            arr[rear] = val;
            rear++;
        }
    }

    void pop()
    {
        if (rear != 0)
        {
            front++;
        }
        else
        {
            cout << " queue is empty" << endl;
        }
    }

    int getfornt()
    {
        if (rear != 0)
        {
            return arr[front];
        }
        else
        {
            cout << "queue is empty " << endl;
        }
    }

    bool empty()
    {
        if (front == rear)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int getsize()
    {
        return rear - front;
    }
};

int main()
{

    Q q(10);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(19);
    q.push(29);
    q.push(39);
    q.push(40);
    q.push(30);
    q.push(42);

    q.pop();
    q.pop();
    q.push(55);
    q.push(20);
    cout << q.getsize() << endl;
    while (!q.empty())
    {
        cout << "first element : " << q.getfornt() << endl;
        q.pop();
    }

    return 0;
}