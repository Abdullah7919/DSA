#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node*next;
};

class Nodeoperation{

    public:
    void push(Node**head, int val){

        Node*newnode = new Node();
        newnode->data=val;
        newnode->next=*head;
        *head=newnode;

    }

    void display(Node*head){
        cout<<"Element of list:";
        while(head!=NULL){
            cout<<head->data<<" ";
            head=head->next;
        }cout<<endl;
    }

    void middle(Node*head){

        Node*slow,*fast;
        slow=fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        cout<<"Middle element:"<<slow->data<<endl;
    }

    Node* reverse(Node**head){

        if(*head==NULL){
            return *head;
        }

        Node*prev_N=NULL;
        Node*curr_N=*head;
        Node*next_N;
        
        while(curr_N){
            next_N=curr_N->next;
            curr_N->next=prev_N;
            prev_N=curr_N;
            curr_N=next_N;
        }
        *head=prev_N;
        return *head;
    }
};

int main(){

    Node*head=NULL;
    // temp  store address of the Object of Nodeoperation in th heap;
    Nodeoperation *temp= new Nodeoperation();

    // this store the object of Nodeoperation in the stack and that object will distroy
    // when the function execution is over
    Nodeoperation obj=Nodeoperation();

    for(int i=5; i>0; i--){
        temp->push(&head,i);
        // temp->display(head);
        // temp->middle(head);
        // temp->display(head);
    }

    obj.display(head);
    obj.reverse(&head);
    obj.display(head);
    return 0;
}