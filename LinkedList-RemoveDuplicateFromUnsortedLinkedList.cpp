
// remove duplicates from unsorted linked list

/*The structure of linked list is the following

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/ 

Node * removeDuplicates( Node *head) 
    {
     // your code goes here
       set<int>s;
       Node *temp=head;
       Node*pre=NULL;
       
       while(temp!=NULL){
           
            if(s.find(temp->data)!=s.end()==true){
                
                pre->next=temp->next;
            }
            else{
                pre=temp;
                s.insert(temp->data);
            }
            
            temp=temp->next;
           
           
       }
       return head;
    }
