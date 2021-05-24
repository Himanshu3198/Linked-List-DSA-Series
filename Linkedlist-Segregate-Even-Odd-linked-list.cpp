// Segregate even and odd nodes in a Link List 
// time complexity O(n)
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
class Solution{
public:
    Node* divide(int N, Node *head){
        // code here
        Node *even=NULL,*even1=NULL,*odd=NULL,*odd1=NULL;
        
        
        Node *temp=head;
        
        while(temp!=NULL){
            
            
            int x=temp->data;
            
            if(x%2==0){
                
                
                if(even==NULL){
                    even=temp;
                    even1=temp;
                }
                else{
                    even->next=temp;
                    even=temp;
                }
            }
            
            else{
                
                if(odd==NULL){
                    
                    odd=temp;
                    odd1=temp;
                }   
                else{
                    odd->next=temp;
                    odd=temp;
                }
            }
            
            
            temp=temp->next;
        }
        
         if(even1){
              even->next=odd1;
         }
         if(odd1){
             odd->next=NULL;   
         }
       
      
         if(even1){
             return even1;
         }
         return odd1;
    }
};
