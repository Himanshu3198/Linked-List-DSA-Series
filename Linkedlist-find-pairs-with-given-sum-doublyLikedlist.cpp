
// Find pairs with given sum in doubly linked list
#include<bits/stdc++.h>
using namespace std;


struct Node{
     int data;
    struct Node *next,*prev;
};


void insert(struct Node **head,int data){

    struct Node *newNode=new Node;
    newNode->data=data;
    newNode->prev=newNode->next=NULL;
    if(*head==NULL){
        *head=newNode;
    }
    else{
        newNode->next=*head;
        (*head)->prev=newNode;
        (*head)=newNode;
    }
}
void pairSum(struct Node*head,int x){

    struct Node*first=head;
    struct Node *second=head;

    while(second->next!=NULL){
        second=second->next;
    }
    // bool found=false;

    while(first!=second){

        if(first->data+second->data==x){
            cout<<"( "<<first->data<<" "<<second->data<<" )"<<"\n";
            first=first->next;
            second=second->prev;
        }
        else{

            if(first->data+second->data>x){
                second=second->prev;
            }
            else{
                first=first->next;
            }
        }
    }
}

int main(){

    struct Node *head=NULL;
    insert(&head, 9);
    insert(&head, 8);
    insert(&head, 6);
    insert(&head, 5);
    insert(&head, 4);
    insert(&head, 2);
    insert(&head, 1);
    int x = 7;
 
    pairSum(head, x);
 
    return 0;
}