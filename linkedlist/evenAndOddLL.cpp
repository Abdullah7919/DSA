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


void insert(Node* &head,int val){
    Node*tail=head;
    Node*newNode=new Node(val);

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

void evenOdd(Node*&head){

    Node*curr=head;
    queue<Node*> qeven,qodd,q;

    while(curr){
        if(curr->data%2==0){
            qeven.push(curr);
        }else{
            qodd.push(curr);
        }

        curr=curr->next;
    }

    while(!qeven.empty()){
        q.push(qeven.front());
        qeven.pop();
    }

    while(!qodd.empty()){
        q.push(qodd.front());
        qodd.pop();
    }

    Node* node=new Node(-1);

    Node* newHead=node;

    while(!q.empty()){
        node->next=q.front();
        node=q.front();
        q.pop();
    }

    node->next=NULL;
    head=newHead->next;
    return;
}

int secondNode(Node*head){
    Node*temp=head;

    while(temp->next->next!=NULL){
        temp=temp->next;
    }

    return temp->data;
}


void display(Node*head){
    
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }cout<<endl;
}

int main(){
    Node*head=NULL;

    insert(head,17);
    insert(head,15);
    insert(head,8);
    insert(head,12);
    insert(head,10);
    insert(head,5);
    insert(head,4);
    insert(head,1);
    insert(head,7);
    insert(head,6);
    cout<<"before:"<<endl;
    display(head);
    // evenOdd(head);
    // cout<<"after:"<<endl;
    // display(head);
    cout<<endl;
    cout<<secondNode(head)<<endl;


    return 0;
}