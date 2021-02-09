//  simplest implementation of linked list  using c/c++

#include <iostream>
 #include<stdio.h>  
#include<stdlib.h>  
using namespace std;
struct Node
{
   int data;
   struct Node *next;
};
struct Node *head = NULL;

void insert(int new_data)
{
   // struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
   Node *new_node = new Node();
   new_node->data = new_data;
   new_node->next = head;
   head = new_node;
}

void insertAtEnd(int data)
{

   Node *new_node = new Node();
   struct Node *temp;

   new_node->data = data;
   new_node->next = NULL;
   temp = head;
   while (temp->next != NULL)
   {
      temp = temp->next;
   }

   temp->next = new_node;
}

void insertAtPosition(int data, int pos)
{

   int count = 0;
   Node *new_node = new Node();
   struct Node *temp;
   struct Node *prevnode;
   struct Node *nextnode;
   new_node->data = data;
   new_node->next = NULL;

   temp = head;
   if (pos > 1)
   {
      for (int i = 0; i < pos; i++)
      {

         temp = temp->next;
         count++;
      }

      prevnode = temp;
      nextnode = temp->next;
      ;

      prevnode->next = new_node;
      new_node->next = nextnode;
   }
   else
   {
      new_node->next = head;
      head = new_node;
   }
}


void Delete()
{

   struct Node *temp = head;
   head = head->next;
   //   free(temp);
   delete (temp);
}


void end_delete()
{
   struct Node *ptr, *ptr1;
   if (head == NULL)
   {
      printf("\nlist is empty");
   }
   else if (head->next == NULL)
   {
      head = NULL;
      free(head);
      printf("\nOnly node of the list deleted ...");
   }
   else
   {
      ptr = head;
      while (ptr->next != NULL)
      {
         ptr1 = ptr;
         ptr = ptr->next;
      }
      ptr1->next = NULL;
      free(ptr);
      printf("\n Deleted Node from the last ...");
   }
}


void DeletePostion(int pos)
{
   struct Node *ptr, *ptr1;
   Node *new_node = new Node();
   ptr = head;
   while (pos--)
   {
      ptr1 = ptr;
      ptr = ptr->next;
   }

   ptr1->next = ptr->next;
   free(ptr);
}

// void SearchELE(int x)
// {
//    struct Node *ptr;
//    int i = 0, flag=1;

//    ptr = head;
//    while (ptr!=NULL)
//    {

//       if (ptr->data== x)
//       {
//          cout << x << " is found at " << i << "\n";
//          flag = 0;
//       }
//       else
//       {
//          flag = 1;    
//       }
//       i++;
//       ptr=ptr->next;

   
//    }
//    if (flag == 1)
//    {
//       cout << "element not found\n";
//    }
   
// }
void search()  
{  
    struct Node *ptr;  
    int item,i=0,flag;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        printf("\nEmpty List\n");  
    }  
    else  
    {   
        printf("\nEnter item which you want to search?\n");   
        scanf("%d",&item);  
        while (ptr!=NULL)  
        {  
            if(ptr->data == item)  
            {  
                printf("item found at location %d ",i+1);  
                flag=0;  
            }   
            else  
            {  
                flag=1;  
            }  
            i++;  
            ptr = ptr -> next;  
        }  
        if(flag==1)  
        {  
            printf("Item not found\n");  
        }  
    }
        
          
}  


void search1(int data)
{
	struct *Node temp = head;
	int var = 0;
	while(temp != null)
	{
		if(temp->data == data)
		{
			return var;
		}
		var = var+1;
		temp = temp->next;
	}
 cout<<" element found at position \t"<<var<<"\n";
}

void display()
{
   struct Node *ptr;
   ptr = head;
   while (ptr != NULL)
   {
      cout << ptr->data << " ";
      ptr = ptr->next;
   }
   cout << "\n";
}
int main()
{
   insert(3);
   insert(1);
   insert(7);
   insert(2);
   insert(9);
   insert(19);
   insert(29);
   cout << "The linked list is: ";
    search();
   // insertAtEnd(40);
   //   insertAtEnd(50);
   //  insert(29);
   //  insertAtPosition(60,3);

   // display();
   // Delete();
   //   Delete();
   //     Delete();
   // display();

   // end_delete();
   // DeletePosition();
   //  display();
   // DeletePostion(2);
   // display();
// SearchELE(7);


 

   return 0;
}
