#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=NULL;
    }
};

void insertAtTail(Node*& tail,Node* curr){
    tail->next=curr;
    tail=curr;
}

Node* sort012(Node*& head){
    Node* zeroHead=new Node(-1);
    Node* zeroTail=zeroHead;
    Node* oneHead=new Node(-1);
    Node* oneTail=oneHead;
    Node* twoHead=new Node(-1);
    Node* twoTail=twoHead;

    Node* curr=head;

    while(curr){
        if(curr->data==0){
            insertAtTail(zeroTail,curr);
        }
        else if(curr->data==1){
            insertAtTail(oneTail,curr);
        }
        else if(curr->data==2){
            insertAtTail(twoTail,curr);
        }

        curr=curr->next;
    }

    if(oneHead->next!=NULL){
        zeroTail->next=oneHead->next;
    }else{
        zeroTail->next=twoHead->next;
    }

    oneTail->next=twoHead->next;
    twoTail->next=NULL;

    head=zeroHead->next;

    return head;
    
}

void insertNode(Node*& head,int val){
    Node* newNode=new Node(val);
    Node*tail=head;
    if(head==NULL){
        head=newNode;
        return;
    }else{

        while(tail->next!=NULL){
            tail=tail->next;
        }

        tail->next=newNode;
        tail=newNode;
        return;
    }
}

void display(Node* head){

    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }cout<<endl;
}
int main(){
    Node* head = NULL;

    insertNode(head,1);
    insertNode(head,2);
    insertNode(head,2);
    insertNode(head,1);
    insertNode(head,2);
    insertNode(head,0);
    insertNode(head,2);
    insertNode(head,2);
    display(head);
    cout<<endl;
    sort012(head);
    display(head);
    return 0;
}

// 12212022