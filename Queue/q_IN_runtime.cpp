#include <iostream>
using namespace std;

class Q
{
public:
    int size;
    int *arr;
    int reare;
    int front;
    Q(int size)
    {
        this->size = size;
        arr = new int[size];
        reare = 0;
        front = 0;
    }
    void nqueue()
    {
        int val;
        cout << "enter the value " << endl;
        cin >> val;
        if (reare == size)
        {
            cout << "q is full" << endl;
        }
        else
        {
            arr[reare] = val;
            reare++;
        }
    }

    void dqueue()
    {
        if (reare == front)
        {
            cout << "queue is empty" << endl;
        }
        else
        {
            front++;
        }
    }

    void peek()
    {
        if (reare == size)
        {
            cout << "queue is empty" << endl;
        }
        else
        {
            arr[front];
        }
    }
    void display()
    {
        if (reare == size)
        {
            cout << "queue is empty" << endl;
        }
        else
        {
            for (int i = front; i <= reare; i++)
            {
                cout << "element is :" << arr[i] << endl;
            }
        }
    }
};

int main()
{

    Q q(10);
    int ch;
    cout << "enter the 1 for push the elment " << endl;
    cout << "enter the 2 for pop  elment " << endl;
    cout << "enter the 3 for display  " << endl;

    do
    {
        cout << "enter the cohise: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            q.nqueue();
            break;
        case 2:
            q.dqueue();
            break;
        case 3:
            q.display();
            break;
        case 4:
            cout << "exit" << endl;
            break;
        default:
            cout << "envalid choice" << endl;
        }
    } while (ch == 4);

    return 0;
}