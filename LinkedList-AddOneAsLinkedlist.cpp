// Add 1 to a number represented as linked list gfg

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 


 // } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    
     Node *reverse(Node *head)
{
  struct Node *currnode = head, *prevnode = NULL, *nextnode = head;

  while (currnode != NULL)
  {
    nextnode = nextnode->next;
    currnode->next = prevnode;
    prevnode = currnode;
    currnode = nextnode;
  }
  return prevnode;
}
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
    
         head=reverse(head);
         
         Node*temp=head;
         
         int carry=1,sum=0;
         
          Node *prev;
                 while(temp!=NULL and carry>0){
                     
                     
                     sum=carry+temp->data;
                     carry=(sum>=10)?1:0;
                     sum=sum%10;
                     
                     temp->data=sum;
                     prev=temp;
                     temp=temp->next;
                     
                     
                     
                 }
             
             
             
                  
                     if(carry>0){
                         
                            prev->next=new Node(carry);
                        
                 
                  }
                         
          head=reverse(head);
         return head;
                  
                  
            }
         
     
        
    
};



int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 
  