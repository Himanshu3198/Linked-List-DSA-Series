// 148. Sort List

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
    ListNode*midNode(ListNode *&head){
        
        ListNode *fast=head;
        ListNode *slow=head;
        ListNode *temp_slow=NULL;
        
        while(fast!=NULL and fast->next!=NULL){
            fast=fast->next->next;
            temp_slow=slow;
            slow=slow->next;
        }
        temp_slow->next=NULL;
    
        return slow;
    }
    
    ListNode *merge(ListNode* &l1,ListNode *&l2){
        ListNode *result=NULL;
        if(l1==NULL){
            return l2;
        }
        if(l2==NULL){
            return l1;
            
        }
        
        
        if(l1->val<l2->val){
            result=l1;
            l1->next=merge(l1->next,l2);
        }
        else{
            result=l2;
            l2->next=merge(l1,l2->next);
        }
        
        return result;
    }
    ListNode* sortList(ListNode* head) {
     
        
        if(head==NULL or head->next==NULL ){
            return head;
        }
        
        
        ListNode *mid=midNode(head);
        
        head=sortList(head);
        mid=sortList(mid);
        
        return merge(head,mid);
        
        
    }
};
