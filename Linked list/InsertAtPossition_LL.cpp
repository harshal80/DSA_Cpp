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

int findLen(Node *head)
{
    Node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}
void InsertAtposs(int data, int poss, Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    // Find the possition of prev & curr
    if (poss == 0)
    {
        insertAtHead(head, tail, data);
        return;
    }

    int len = findLen(head);
    if (poss == len)
    {
        insertAtTail(head, tail, data);
        return;
    }

    int i = 1;
    Node *prev = head;
    while (i < poss)
    {
        prev = prev->next;
        i++;
    }
    Node *curr = prev->next;

    // step 2:
    Node *newNode = new Node(data);

    // step 3:
    newNode->next = curr;

    // step 4:
    prev->next = newNode;
}

void del(Node *&head, Node *&taill, int poss, int data)
{
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
    InsertAtposs(101, 6, head, tail);

    print(head);
    // cout << endl;
    // cout << "head: " << head->data << endl;
    // cout << "tail: " << tail->data << endl;

    // InsertAtposs(101, 6, head, tail);
    // cout << "Printing after insert at position call" << endl;
    // print(head);
    // cout << endl;
    // cout << "head : " << head->data << endl;
    // cout << "tail : " << tail->data << endl;

    return 0;
}