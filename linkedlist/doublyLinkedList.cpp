#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->data = val;
        this->next = NULL;
        this->prev = NULL;
    }

    ~Node()
    {
        int val = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }

        cout<<"Deleted item "<<val<<endl;
    }
};

void print(Node *head)
{

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int getLength(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    return count;
}

void insertAtHead(Node *&tail, Node *&head, int val)
{

    Node *newNode = new Node(val);
    if (head == NULL)
    {
        newNode->next = head;
        head = newNode;
        tail = newNode;
    }
    else
    {

        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void insertAtTail(Node *&tail, Node *&head, int val)
{

    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        newNode->next = tail;
        tail = newNode;
        head = newNode;
    }
    else
    {
        newNode->next = tail->next;
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void inserAtPosition(Node *&tail, Node *&head, int val, int pos)
{
    Node *newNode = new Node(val);
    Node *temp = head;

    if (pos > getLength(head))
    {
        cout << "Enter Correct position" << endl;
        return;
    }
    if (pos == 1)
    {
        insertAtHead(tail, head, val);
        return;
    }
    if (pos == getLength(head))
    {
        insertAtTail(tail, head, val);
        return;
    }

    int i = 1;
    Node *prev = temp;
    while (i < pos)
    {
        prev = temp;
        temp = temp->next;
        i++;
    }

    newNode->next = temp;
    temp->prev = newNode;
    prev->next = newNode;
    newNode->prev = prev;
}

void deleteATPosition(int pos, Node *&head, Node *&tail)
{

    Node *temp = head;

    if (pos == 1)
    {
        // temp->next->prev=NULL;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }

    int i = 1;
    Node *curr = head;
    Node *prev = head;
    while (i < pos)
    {
        prev = curr;
        curr = curr->next;
        i++;
    }

    if (pos == getLength(head))
    {
        curr->prev = NULL;
        prev->next = curr->next;
        tail = prev;
        delete curr;
        return;
    }

    curr->prev = NULL;
    prev->next = curr->next;
    curr->next->prev = prev;
    curr->next = NULL;
    delete curr;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    insertAtHead(tail, head, 3);
    insertAtHead(tail, head, 4);
    insertAtHead(tail, head, 5);
    insertAtTail(tail, head, 6);
    insertAtTail(tail, head, 7);
    inserAtPosition(tail, head, 3, 2);
    inserAtPosition(tail, head, 0, 1);
    inserAtPosition(tail, head, 8, 7);
    print(head);
    cout << "Length " << getLength(head) << endl;
    cout << "Head  " << head->data << endl;
    cout << "Tail  " << tail->data << endl;
    deleteATPosition(1, head, tail);
    cout << "After deletion 1 position" << endl;
    print(head);
    cout << "Head " << head->data << endl;
    cout << "tail " << tail->data << endl;

    deleteATPosition(3, head, tail);
    cout << "After deletion any position" << endl;
    print(head);
    cout << "Head " << head->data << endl;
    cout << "tail " << tail->data << endl;

    deleteATPosition(getLength(head), head, tail);
    cout << "After deletion at last position" << endl;
    print(head);
    cout << "Head " << head->data << endl;
    cout << "tail " << tail->data << endl;

    return 0;
}