#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
    Node*prev;

    Node(int val){
        this->data=val;
        this->next=NULL;
        this->prev=NULL;
    }
};

void display(Node*head){

    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void insertLL(Node*& head,Node*& tail,int val){

    Node*newNode=new Node(val);

    if(head==NULL || tail==NULL){
        newNode->next=head;
        head=newNode;
        tail=head;
    }else{
        newNode->next=tail->next;
        tail->next=newNode;
        newNode->prev=tail;
        tail=newNode;
    }

}


void reverseLL(Node*&head){

    Node*temp=NULL;

    if(head==NULL){
        cout<<"LL is empty"<<endl;
        return;
    }

    Node*curr=head;
    while(curr!=NULL){
        temp=curr->prev;
        curr->prev=curr->next;
        curr->next=temp;
        curr=curr->prev;
    }

    //Edge case if our linked list is empty Or list with only one node
    if(temp!=NULL){
        head=temp->prev;
    }
}

int main(){

    Node*head=NULL;
    Node*tail=NULL;

    insertLL(head,tail,1);
    display(head);

    insertLL(head,tail,2);
    display(head);

    insertLL(head,tail,3);
    display(head);

    insertLL(head,tail,4);
    display(head);

    reverseLL(head);
    display(head);
    
    return 0;
}