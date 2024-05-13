#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{

    Node *first = new Node(10);
    Node *second = new Node(30);
    Node *third = new Node(49);
    Node *forth = new Node(59);
    Node *fith = new Node(39);

    first->next = second;
    second->next = third;
    third->next = forth;
    forth->next = fith;
    fith->next = NULL;

    cout << "display the liked list" << endl;
    display(first);

    return 0;
}