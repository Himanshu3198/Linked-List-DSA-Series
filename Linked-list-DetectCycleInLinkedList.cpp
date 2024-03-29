//  detect cycle in  a Linked List using c++
//  Time Complexity O(n)  where n is no of nodes in linked list

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
    bool hasCycle(ListNode *head) {
        
        ListNode *fast=head;
        ListNode *slow=head;
        
        
        while(fast and fast->next){
            
            
            slow=slow->next;
            fast=fast->next->next;
            
            if(fast==slow) return true;
        }
        
        return false;
    }
};
  
