#include <iostream>
using namespace std;

class CirQueue
{
public:
    int size;
    int *arr;
    int rear;
    int front;
    CirQueue(int size)
    {
        this->size = size;
        arr = new int[size];
        rear = -1;
        front = -1;
    }
    void enqueue(int val)
    {
        // Queue full
        // single element case -> first element
        // circular nature
        // normal flow

        if (front == 0 && rear == size - 1)
        {
            cout << "Q is fulll,cannot insert" << endl;
        }
        else if (front == -1)
        {
            front = rear = 0;
            arr[rear] = val;
        }
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
            arr[rear] = val;
        }
        else
        {
            rear++;
            arr[rear] = val;
        }
    }

    void dqueue()
    {
        // empty check
        // single element
        // circular flow
        // normal flow
        if (front == -1)
        {
            cout << "Q is empty ,cannot remove" << endl;
        }
        else if (front == rear)
        {
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        else if (front == size - 1)
        {
            front = 0;
        }
        else
        {
            front++;
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
    CirQueue q(10);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    q.enqueue(70);
    q.enqueue(35);
    q.enqueue(45);
    q.enqueue(55);
    q.enqueue(65);
    q.enqueue(75);

    q.dqueue();
    q.dqueue();
    q.enqueue(29);
    q.enqueue(50);

    while (q.empty() != true)
    {
        cout << "first element : " << q.getfornt() << endl;
        q.dqueue();
    }

    return 0;
}