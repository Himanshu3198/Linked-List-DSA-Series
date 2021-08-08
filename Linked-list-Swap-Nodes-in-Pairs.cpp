// 24. Swap Nodes in Pairs

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
    ListNode* swapPairs(ListNode* head) {
        
        if(!head){
            return NULL;
        }
        if(head->next==NULL){
            return head;
        }
        
        ListNode *prev,*nex=NULL,*temp=head,*root=head->next,*scndnext;
    
        
        ListNode *dummy=new ListNode(0);
        
        prev=dummy;
        dummy->next=head;
         while(temp and temp->next){
             
         
              prev->next=temp->next;
             
             
         }
        
        return root;
        
    }
};
