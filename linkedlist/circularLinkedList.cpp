#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        this->data = val;
        this->next = NULL;
    }

    ~Node()
    {
        int val = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }

        cout << "Deleted Node data: " << val << endl;
    }
};

void insertAtPosition(Node *&tail, int ele, int val)
{

    if (tail == NULL)
    {
        Node *newNode = new Node(val);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        Node *newNode = new Node(val);
        Node *temp = tail;
        while (temp->data != ele)
        {
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void deleteNode(Node *&tail, int val)
{

    Node *prev = tail;
    Node *curr = prev->next;

    if (tail == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }

    else if (curr == prev)
    {
        tail = NULL;
    }

    while (curr->data != val)
    {
        prev = curr;
        curr = curr->next;
    }

    prev->next = curr->next;
    if (tail == curr)
    {
        tail = prev;
    }

    curr->next = NULL;

    delete curr;
}

void print(Node *tail)
{

    Node *temp = tail;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != tail);
    cout << endl;
}

int main()
{
    Node *tail = NULL;

    insertAtPosition(tail, 1, 2);
    print(tail);
    insertAtPosition(tail, 2, 3);
    print(tail);
    insertAtPosition(tail, 3, 7);
    print(tail);
    insertAtPosition(tail, 7, 5);
    print(tail);
    deleteNode(tail, 2);
    print(tail);
    deleteNode(tail, 7);
    print(tail);
    return 0;
}