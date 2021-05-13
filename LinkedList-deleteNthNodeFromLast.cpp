// 19. Remove Nth Node From End of List
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    
    
  
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*temp=head;
        
        ListNode* fast=head,*slow=head;
       
        for(int i=0;i<n;i++){
            
            fast=fast->next;
            
            if(!fast){
                
                return head->next;
            }
        }
        
        
        
        
     
        
          
        
        
        while(fast->next){
            fast=fast->next;
            slow=slow->next;
        }
        
        
        ListNode* node_del=slow->next;
        
        slow->next=node_del->next;
        
        delete(node_del);
        
        return head;
    }
};
