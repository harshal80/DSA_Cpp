#include <iostream>
using namespace std;

class Node
{
public:
    Node *next;
    int data;
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

// I want to insert a node right at the head of linked list
void insertAtHead(Node *&head, Node *&tail, int data)
{

    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    Node *newNode = new Node(data);
    newNode->next = head;

    head = newNode;
}

// I want to insert right at end of Linkend list

void insertAtTail(Node *&head, Node *&tail, int data)
{

    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    Node *newNode = new Node(data);
    tail->next = newNode;
    tail = newNode;
}
void print(Node *head)
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

    Node *head = NULL;
    Node *tail = NULL;
    insertAtHead(head, tail, 49);
    insertAtHead(head, tail, 9);
    insertAtHead(head, tail, 419);
    insertAtHead(head, tail, 29);
    insertAtHead(head, tail, 99);
    insertAtTail(head, tail, 11);
    insertAtTail(head, tail, 13);

    // Node *second = new Node(99);
    // Node *third = new Node(19);
    // Node *forth = new Node(3);
    // Node *fith = new Node(9);

    // first->next = second;
    // second->next = third;
    // third->next = forth;
    // forth->next = fith;

    print(head);

    return 0;
}