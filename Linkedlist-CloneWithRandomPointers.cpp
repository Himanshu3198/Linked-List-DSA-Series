/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        
        Node *copy,*front=head,*result;
         
         if(!head) 
         {
             return head;
         }
//          creating clone nodes
        while(front){
            
            
            copy=new Node(front->val);
            
            copy->next=front->next;
            front->next=copy;
            front=front->next->next;
        }
        result=head->next;
        front=head;
        //         connecting random pointers of clone node but note we losing the orginal link of linked list
        while(front){
            
            if(front->random){
                
                front->next->random=front->random->next;
              
            }
              front=front->next->next;
        }
        
//         final step reconnect the original link and clone list to next pointer
        
        
        front=head;
        while(front){
            
            copy=front->next;
            front->next=copy->next;
            
            if(copy->next){
                copy->next=front->next->next;
                
               
            }
             front=front->next;
        }
        
        return result;
        
        
        

        
        
    }
};
