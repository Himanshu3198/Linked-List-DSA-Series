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
    ListNode* deleteMiddle(ListNode* head) {
        
        
        ListNode *temp=head,*slow=head,*fast=head;
        
           if(!head){
               return NULL;
           }
        
         int count_list=0;
        
       
        
        while(temp){
            
            count_list++;
            temp=temp->next;
        }
         if(count_list==1){
            return NULL;
        }
        
        if(count_list==2){
             head->next=NULL;
            return head;
        }
        temp=head;
        while(fast->next and fast->next->next){
            
            slow=slow->next;
            fast=fast->next->next;
        }
        
        
        
        
        
        ListNode *prev=NULL;
        
     
        while(temp->next!=slow){
            
            temp=temp->next;
        }
        
        if(count_list%2){
            temp->next=slow->next;
        }
        else{
            
            slow->next=slow->next->next;
        }
        
        
        return head;
    }
};
