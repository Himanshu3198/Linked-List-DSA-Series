#include<bits/stdc++.h>
using namespace std;


struct node{
    int data;
    struct node*next;

};


node *newNode(int key){
    node *temp=new node();
    temp->data=key;
    temp->next=NULL;
    return temp;
}

void findFirstLoopIndex(node *head){


    node *fast=head;
    node *slow=head;
   

    while(fast->next!=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        

        if(fast==slow){
             break;
        }
    }
      slow=head;
      while(slow!=fast){
          slow=slow->next;
          fast=fast->next;

      }
      cout<<slow->data<<"\n";
}



int main(){

    node *head=newNode(50);
    head->next=newNode(20);
    head->next->next=newNode(15);
    head->next->next->next=newNode(4);
    head->next->next->next->next=newNode(10);
        head->next->next->next->next->next = head->next->next;

      findFirstLoopIndex(head);

    // display(head);

}