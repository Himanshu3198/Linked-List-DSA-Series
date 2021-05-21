// Split a Circular Linked List into two halves 

void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    // your code goes here
    
       Node *fast=head,*slow=head;
       
       while(fast->next!=head and fast->next->next!=head){
           
           fast=fast->next->next;
           slow=slow->next;
       }
       
       if(fast->next!=head){
           fast=fast->next;
       }
       
       *head1_ref=head;
       
    //   if(head->next!=head){
            *head2_ref=slow->next;
    //   }
       
      
       
       fast->next=slow->next;
       
       slow->next=head;
       
       
}
