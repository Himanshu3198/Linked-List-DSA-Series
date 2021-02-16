// find middle of linked list implementaton cpp
// time and space complexity O(n) & O(1);

#include<bits/stdc++.h>
using namespace std;


struct node{
    int data;
    struct node* next;

};

struct node* head=NULL;


void insertion(int data){ 

    node* newnode=new node();
    newnode->data=data;
    newnode->next=head;
    head=newnode;
}

void display(){
    struct node* temp=head;
//     int count=1;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
//         count++;
    }
    cout<<"\n";
}

// int lengthOfLinkedList(){
//     struct node* temp=head;
//     int count=0;
//     while(temp!=NULL){
//         // cout<<temp->data<<" ";
//         temp=temp->next;
//         count++;
//     }
//     return count;

// }

void middleNode(){

    if(head==NULL){
        cout<<head<<"\n";
    }
    node* slow=head;
    node* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
     cout<<slow->data<<"\n";
  


}


int main(){

       insertion(2);
        insertion(3);
         insertion(4); 
         insertion(6);
          insertion(8);
        

         display();
        middleNode();


         return 0;

}
