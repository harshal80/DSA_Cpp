#include <iostream>
#include <queue>
using namespace std;

int main()
{

    priority_queue<int> max; // max heep
    priority_queue<int, vector<int>, greater<int>> min;

    max.push(1);
    max.push(2);
    max.push(3);
    max.push(0);
    cout << "Size : " << max.size() << endl;
    int n = max.size();
    for (int i = 0; i < n; i++)
    {
        cout << max.top() << " ";
        max.pop();
    }
    cout << endl;

    min.push(7);
    min.push(5);
    min.push(3);
    min.push(2);
    min.push(6);

    int m = min.size();
    for (int i = 0; i < m; i++)
    {
        cout << min.top() << " ";
        min.pop();
    }
    cout << endl;

    cout << "Empty or not: " << min.empty();

    return 0;
}