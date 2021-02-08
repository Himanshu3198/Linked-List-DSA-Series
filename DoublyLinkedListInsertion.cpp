
//------------Doubly Linked list Insertion at first last and specific position-------------------


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
         	cout<<"enter the node data\t";
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
		 void insertAtBegin()
		 {
		 	struct node* newnode=(struct node*)malloc(sizeof(struct node));
		 	cout<<"enter the begin node data\t";
         	cin>>newnode->data;
         	newnode->prev=0;
         	newnode->next=0;
         		if(head==0)
         	{
         		head=tail=newnode;
			 }
			 else{
			 	head->prev=newnode;
			 	newnode->next=head;
			 	head=newnode;
			 }
		 	
		 }
		 void insertAtEnd()
		 {
		 	struct node* newnode=(struct node*)malloc(sizeof(struct node));
         	cout<<"enter the end node data\t";
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
		 void display()
		 {
		 	struct node *temp;
		 	temp=head;
		 	while(temp!=0)
		 	{
		 		cout<<temp->data<<" ";
		 		temp=temp->next;
			 }
		 }
		 void insertAtPos()
		 {
		 	struct node *newnode,*temp;
		 	int pos,i=1,data;
		 	temp=head;
		 	cout<<"where do you want to insert\t";
		 	cin>>pos;
		 	
		 	newnode=(struct node*)malloc(sizeof(struct node));
		 	cout<<"Enter data to insert\t";
		 	cin>>data;
		 	cout<<"data is inserted at\t"<<pos<<" ";
		 	newnode->data=data;
		 	newnode->next=0;
		 	newnode->prev=0;
		 	while(i<pos-1){
		 		temp=temp->next;
		 		i++;
			 }
			 newnode->prev=temp;
			 newnode->next=temp->next;
			 temp->next->prev=newnode;
			 temp->next=newnode;
		 }
		 
		 int main()
		 {
//		 	while(1)
//		 	{
//			 
//		 	switch(int choice)
//		 	{
//		 		case 1:cout<<"enter data to create list\t";create();
//		 	           break;
//		 	           case 2:cout<<"enter data to insert at begin \t";insertAtBegin();
//		 	           break;
//		 	           case 3:cout<<"enter data to insert at end\t";insertAtEnd();
//		 	           break;
//		 	           case 4:display();
//		 	           break;
//		 	           default;
//			 }
			 
		 	create();
		 	create();
		 	create();
		 	create();
		 	create();
		 	insertAtBegin();
//		 	insertAtBegin();
		 	
		 	display();
		 	insertAtEnd();
//		 	insertAtEnd();
		 		display();
		 		insertAtPos();
		 		display();
		 		
		 		
		 	
		 }
