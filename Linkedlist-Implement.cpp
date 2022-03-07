#include<bits/stdc++.h>
using namespace std;

struct Node{
    
    int data;
    Node *next;

    Node(){
        next=NULL;
    }
};
struct Node *head=NULL;

class Linkedlist{
      public:
     
      void insert(int val){
          Node *temp=new Node();
          temp->data=val;

          if(head==NULL){
              head=temp;
          }else{

              Node *ptr=head;

              while(ptr->next!=NULL){
                  ptr=ptr->next;

              }
              ptr->next=temp;
              
          }
          
      }

      void display(Node *head);
};

void Linkedlist::display(Node *head){

    Node *ptr=head;
  cout<<"display\n";
    while(ptr){

        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}

    
int main(){

      Linkedlist ll;

      ll.insert(1);
      ll.insert(2);
      ll.insert(3);
      ll.insert(4);
      ll.display(head);
}
    



 