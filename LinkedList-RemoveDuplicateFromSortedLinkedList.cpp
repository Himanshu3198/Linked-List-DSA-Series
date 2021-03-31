
// remove duplicates from sorted linked list in cpp
// time complexity O(nlogn);
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;
void insert(int key)
{
    struct Node *tail;
    struct Node *newnode = new Node();
    newnode->data = key;
    newnode->next = NULL;

    if (head == NULL)
    {
        head=newnode;
    }

    else
    {
        tail=head;
        while (tail->next != NULL)
        {
            tail = tail->next;
        }
        tail->next = newnode;
      
    }
}


void remove_duplicate(Node *head){
      struct Node *temp=head;

      while(temp!=NULL && temp->next!=NULL){
   
         if(temp->data==temp->next->data){

             while(temp!=NULL and temp->next!=NULL and temp->data==temp->next->data){

                 Node *del=temp->next;
                 temp->next=del->next;
                 delete(del);

             }
         }
         else{
             temp=temp->next;
         }
       
            
      }
}

void display(Node *head)
{

    struct Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data ;
        temp = temp->next;
        cout<<"-->";
        
    }
}

int main()
{

  
      insert(1);
       insert(1);
     insert(2);
      insert(3);
       insert(3);
     
    // display(head);
    remove_duplicate(head);
    display(head);

    return 0;
}