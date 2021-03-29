// https://leetcode.com/problems/linked-list-cycle-ii/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        
        
        
        ListNode *slow=head,*fast=head;
        while(slow!=NULL && fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow){
                   while(slow && head){
                       
                       if(slow==head){
                           return slow;
                       }
                       else{
                           slow=slow->next;
                           head=head->next;
                       }
                   }
                
            }
        }
        return nullptr;
       
    }
};
