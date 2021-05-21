// Check If Circular Linked List
bool isCircular(Node *head)
{
   // Your code here
   
   Node *firstNode=head,*temp=head;
   
   
   while(temp!=NULL){
       
       temp=temp->next;
       if(temp==firstNode){
           return true;
       }
   }
   return false;
}
