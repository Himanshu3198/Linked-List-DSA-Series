//  Linked list insertion cpp
//  time complexity O(n)

#include <iostream>
using namespace std;
struct Node {
   int data;
   struct Node *next;
};
struct Node* head = NULL;



void insert(int new_data) {
   // struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
   Node* new_node=new Node();
   new_node->data = new_data;
   new_node->next = head;
   head = new_node;
}




void insertAtEnd(int data){

   Node * new_node=new Node();
    struct Node* temp;



    
     new_node->data=data;
    new_node->next=NULL;
    temp=head;
    while(temp->next!=NULL){
       temp=temp->next;
    }
   
      temp->next=new_node;


}




void insertAtPosition(int data,int pos){

   int count=0;
   Node * new_node= new Node();
   struct Node* temp;
       struct Node* prevnode;
     struct Node*   nextnode;
   new_node->data=data;
   new_node->next=NULL;

   temp=head;
   if(pos>1){
   while(count<=pos-2){
       
        temp=temp->next;
        count++;
   }
   prevnode=temp;
   nextnode=temp->next;;

   prevnode->next=new_node;
   new_node->next=nextnode;
   }
   else{
      new_node->next=head;
      head=new_node;
   }

}



void display() {
   struct Node* ptr;
   ptr = head;
   while (ptr != NULL) {
      cout<< ptr->data <<" ";
      ptr = ptr->next;
   }
}
int main() {
   insert(3);
   insert(1);
   insert(7);
   insert(2);
   insert(9);
     insert(19);
   cout<<"The linked list is: ";

   // insertAtEnd(40);
   //   insertAtEnd(50);
   //  insert(29);
    insertAtPosition(60,6);

   display();
   return 0;
}
