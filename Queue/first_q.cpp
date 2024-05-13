#include <iostream>
#include <queue>
using namespace std;

int main()
{

    queue<int> q;
    q.push(4);
    q.push(3);
    q.push(6);
    q.push(2);
    q.push(8);
    q.push(1);

    // display the frant element
    cout << q.front() << endl;
    // remove the frant element
    q.pop();

    // q.size :-
    cout << "q size is --> " << q.size() << endl;

       while (!q.empty())
    {
        cout << "q first element is : " << q.front() << endl;
        q.pop();
    }

    return 0;
}