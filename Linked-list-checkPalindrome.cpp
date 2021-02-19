// Function to check if a singly linked list is palindrome using stack cpp
// time complexity O(n)



#include <bits/stdc++.h>
#include<stack>
using namespace std;

struct node
{
    char data;
    struct node *next;
};

void push(node **head, char data)
{
    node *newnode = new node();
    newnode->data = data;
    newnode->next = *head;
    *head = newnode;
}

bool isPalindrome(node*head){

   bool palindrome=false;


   struct node  *temp=head,*temp2=head;
   stack<char>s;
   while(temp!=NULL){
   
         s.push(temp->data);
         temp=temp->next;
   }

   while(temp2!=NULL){

       if(s.top()==temp2->data){
      
           palindrome=true;

           s.pop();
           temp2=temp2->next;
       }
       else{
           palindrome=false;
           break;
       }
   }

   return palindrome;



   


}


void display(node *head)
{

    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << "\n";
}
int main()
{

    node *head = NULL, *head1;

    push(&head, 'R');
    push(&head, 'A');
    push(&head, 'X');
    push(&head, 'A');
    push(&head, 'Z');

    // display(head);
    // cout<<isPalindrome(head);

    if(isPalindrome(head)){
        cout<<"yes linked is palindrome\n";
    }
    else{
        cout<<"No linked list is not palindrome\n";
    }


    return 0;
}
