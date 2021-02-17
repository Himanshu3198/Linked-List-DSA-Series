#include<bits/stdc++.h>
using namespace std;

struct node{

      int data;
      struct node *next;


};

struct node *head=NULL;


void insertion(int x){
    node *newnode=new node;
    newnode->data=x;
    newnode->next=head;
    head=newnode;

}

void removeNthNodeEnd(int key){
    struct  node *fast=head,*slow=head,*temp;
    // int count=0;
    for(int i=1;i<=key;i++){
        fast=fast->next;

    }

    while ((fast->next!=NULL)){
        slow=slow->next;
        fast=fast->next;
    }
    
    //   temp=slow;
      slow->next=slow->next->next;

    //   delete(temp);

       




}

void display(){
    struct node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"\n";
}

int main(){

    insertion(2);
    insertion(4);
    insertion(6);
    insertion(8);
    insertion(10);
     insertion(12);
    //   insertion(12);


    display();
    removeNthNodeEnd(2);
      display();
    return 0;
}