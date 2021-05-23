// 328. Odd Even Linked List

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
    ListNode* oddEvenList(ListNode* head) {
        
        
        if(!head) return head;
        ListNode *first=head;
      ListNode *second=first->next,*temp=second;
        
        while(first!=NULL and first->next!=NULL and second!=NULL and second->next!=NULL){
            
            first->next=first->next->next;
            
            second->next=second->next->next;
            first=first->next;
            second=second->next;
        }
        
        first->next=temp;
        first=head;
        
        return first;
    }
};
