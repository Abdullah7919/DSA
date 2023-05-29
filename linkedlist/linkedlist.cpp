#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

void display(Node*head){
    cout<<"Element of list are:"<<endl;
   Node* temp;
    temp=head;
    while(temp!=0){
        cout<<temp->data<<endl;
        temp=temp->next;
        
    }
}

void insertionatend(Node*head){
    Node*temp, *newnode;
    temp=head;
    while(temp->next!=0){
        temp=temp->next;
    }
    newnode=new Node();
    cout<<"Enter the data you want to insert at end:"<<endl;
    cin>>newnode->data;
    newnode->next=0;
    temp->next=newnode;
}


// void insertionatbegning(Node**head){
//     Node*temp, *newnode;
//     temp=*head;
//     newnode=new Node();
//     cout<<"Enter the data you want to insert at begining:"<<endl;
//     cin>>newnode->data;
//     newnode->next=temp;
//     *head=newnode;
   
// }

// void insertionatanyposition(Node**head){
//     Node *newnode,*temp;
//     int pos;
//     cout<<"Enter the position you want to insert an element:"<<endl;
//     cin>>pos;
//     newnode=new Node();
//     temp=*head;
//     if(pos==1){
//         cout<<"Enter the element you want to insert:"<<endl;
//         cin>>newnode->data;
//         newnode->next=temp;
//         *head=newnode;
//     }
//     else{
//     int i=1;
//     while(i<pos){
//         temp=temp->next;
//         i++;
//     }
//     cout<<"Enter the element you want to insert:"<<endl;
//     cin>>newnode->data;
//     newnode->next=temp->next;
//     temp->next=newnode;
//     }
// }


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
    // insertionatanyposition(&head);
    // insertionatbegning(&head);

    // insertionatend(head);

    display(head );
     
    return 0;
}