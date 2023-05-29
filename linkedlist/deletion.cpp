#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
};

void display(Node*head){
    Node*temp;
    temp=head;
    cout<<"Element of linkedlist:"<<endl;
    while(temp!=0){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

void deletionfrombegining(Node**head){
    Node*temp;
    temp=*head;
    *head=temp->next;
    cout<<"deleted element from begining:"<<endl;
    cout<<temp->data<<endl;
    free(temp);
}

void deletionfromanyposition(Node**head){
    Node*temp, *prev;
    temp=*head;
    int pos;
    cout<<"Enter the position you want to delete:"<<endl;
    cin>>pos;
    int i=1;
    while(i<pos){
        prev=temp;
        temp=temp->next;
        i++;
    }
    prev->next=temp->next;
    cout<<"deleted element from pos="<<pos<<":"<<endl;
    cout<<temp->data<<endl;
    free(temp);
}

void deletionfromend(Node*head){
    Node*temp,*prev;
    temp=head;
    while(temp->next!=0){
        prev=temp;
        temp=temp->next;
    }
    prev->next=0;
    cout<<"deleted element from end:"<<endl;
    cout<<temp->data<<endl;
    free(temp);
}

int main(){
    Node *head, *newnode, *temp;
    head=0;
    int choice;
    cout<<"How many element you want:"<<endl;
    cin>>choice;
     cout<<"Enter the element:"<<endl;
    while(choice){

        newnode= new Node();
       
        cin>>newnode->data;
        newnode->next=0;
        if(head==0){
            head=temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        choice--;
    }
    deletionfromanyposition(&head);
    deletionfrombegining(&head);
    deletionfromend(head);
    display(head);
    return 0;
}