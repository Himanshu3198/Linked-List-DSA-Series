// 1669. Merge In Between Linked Lists

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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
     
        
        ListNode* fstnode2=list2,*lstnode2;
        
        
        while(list2!=NULL){
            
            lstnode2=list2;
            list2=list2->next;
        }
        
        ListNode* strt,*end,*head=list1;
        
        int count=1;
        
        while(list1!=NULL){
            
           if(count==a){
               strt=list1;
           }
            if(count==(b+1)){
                
                end=list1;
            }
            count++;
            list1=list1->next;
        }
        
        strt->next=fstnode2;
        lstnode2->next=end->next;
        
        return head;
        
        
        
        
        
    }
};
