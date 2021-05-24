// 1721. Swapping Nodes in a Linked List

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
    ListNode* swapNodes(ListNode* head, int k) {
     
        
        ListNode *fast=head,*kth=NULL,*slow=head;
        
        for(int i=1;i<k;i++){
            fast=fast->next;
        }
        
        kth=fast;
        fast=fast->next;
        
        while(fast){
            fast=fast->next;
            slow=slow->next;
        }
      
        swap(slow->val,kth->val);
        
        return head;
    }
};
