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

void insertNode(Node*&head,int val){
    Node* newNode=new Node(val);

    Node*tail=head;

    if(head==NULL){
        head=newNode;
    }else{

        while(tail->next!=NULL){
            tail=tail->next;
        }

        tail->next=newNode;
        tail=newNode;
    }
}

void display(Node* head){

    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }cout<<endl;
}

Node* sort(Node*head){
    Node* dummy=new Node(1000);

    while(head){
        Node* next=head->next;
        Node* temp=dummy;

        while(temp->next && temp->next->data<head->data){
            temp=temp->next;
        }

        head->next=temp->next;

        temp->next=head;
        head=next;
    }

    return dummy->next;
}

int main(){
    Node*head=NULL;

    insertNode(head,-1);
    insertNode(head,5);
    insertNode(head,3);
    insertNode(head,4);
    insertNode(head,0);
    display(head);
    head=sort(head);
    display(head);
    return 0;
}