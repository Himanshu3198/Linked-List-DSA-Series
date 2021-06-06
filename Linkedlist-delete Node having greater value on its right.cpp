// Delete nodes having greater value on right 
class Solution
{
    public:
    
    Node *reverse(Node *head){
        
        Node *curr=head,*nex=head,*prev=NULL;
        
        while(curr){
            nex=nex->next;
            curr->next=prev;
            prev=curr;
            curr=nex;
            
        }
        return prev;
    }
    Node *compute(Node *head)
    {
        // your code goes here
            if(head == NULL || head->next == NULL) {
      return head;
    }
          
          head=reverse(head);
          Node* curr=head;
         Node* max_node=head, 
        
         
         Node *temp=head;
         
         while(temp->next!=NULL){
             
             if(temp->next->data>=max_node->data){
                
               max_node=temp->next;
               temp=temp->next;
                 
             }
             else{
                 
              temp->next=temp->next->next;
                 
             }
             
            
            
             
         }
         
         head=reverse(curr);
         
         return head;
         
         
         
         
         
    }
    
