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
		 void deleteBegin()
		 {
		 	struct node *temp;
		 	if(head==0)
		 	{
		 		cout<<"underflow\n";
			 }
			 else if(head->next=0)
			 {
			 	head=0;
			 	free(head);
			 	cout<<"\n node deleted\n";
			 }
			 else{
			 	temp=head;
			 	head=head->next;
			 	free(temp);
			 	cout<<"\n node deleted\n";
			 }
		 }
		 void deleteLast()
		 {
		 	struct node *temp;
		 	 	if(head==0)
		 	{
		 		cout<<"underflow\n";
			 }
			 else if(head->next=0)
			 {
			 	head=0;
			 	free(head);
			 	cout<<"\n node deleted\n";
			 }
			 else{
			 	temp=head;
			 	while(temp->next!=0)
			 	{
			 		temp=temp->next;
				 }
				 temp->prev->next=0;
				 free(temp);
				 cout<<"\n node deleted\n";
				 
			 }
		 	
		 }
		 void deleteSpecific(){
		 	struct node *ptr,*temp;
		 	int pos,i=1;
		 	cout<<"enter the position to be deleted\n";
		 	cin>>pos;
		 	ptr=head;
		 	while(i<pos-1)
		 	{
		 		ptr=ptr->next;
		 		i++;
			 }
			 if(ptr->next=0)
			 {
			 	cout<<"\n cant delete\n";
			 	
			 }
			 else if(ptr->next->next==0)
			 {
			 	ptr->next=0;
			 }
			 else{
			 	temp=ptr->next;
			 	ptr->next=temp->next;
			 	temp->next->prev=ptr;
			 	free(temp);
			 	cout<<"\n node deleted\n";
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
		 int main()
		 {
		 	create();
		 	create();
		 	create();
		 	create();
		 	create();
		 	create();
		 	display();
		 	deleteBegin();
		 	display();
		 	
		 }
