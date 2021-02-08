
//    ----------Reverse of Doubly Linked List-----------------
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
struct node{
	int data;
	struct node* prev;
	struct node* next;
};
struct node *head,*tail; 
      void create()
         {
         	struct node* newnode= (struct node*)malloc(sizeof(struct node));
         	cout<<"\t enter the node data\t";
         	cin>>newnode->data;
         	newnode->prev=0;
         	newnode->next=0;
         	if(head==0)
         	{
         		head=tail=newnode;
			 }
			 else{
			 	tail->next=newnode;
			 	newnode->prev=tail;
			 	tail=newnode;
			 }
		 }
		 void reverse()
		 {
		 	struct node *current,*nextnode;
		 	current=head;
		 	while(current!=0)
		 	{
		 		nextnode=current->next;
		 		current->next=current->prev;
		 		current->prev=nextnode;
		 		current=nextnode;
			 }
			 current=head;
			 head=tail;
			 tail=current;
		 }
		 	 void display()
		 {
		 	struct node *temp;
		 	temp=head;
		 	while(temp!=0)
		 	{
		 	cout<<"\t"<<temp->data<<" ";
		 		temp=temp->next;
			 }
		 }
		 int main()
		 {
		 	create();
		 	create();
		 	create();
		 	create();
		 	create();
		 	create();
		 	display();
		 	reverse();
		 	cout<<"\n \tAfter Reverse \n";
		 		display();
		 	
		 }
