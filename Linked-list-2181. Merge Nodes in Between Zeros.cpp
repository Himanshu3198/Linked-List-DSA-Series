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
    
//      time & space complexity: O(n) & O(1)
    ListNode* mergeNodes(ListNode* head) {
        
        
        ListNode *newHead=NULL,*newTail=NULL;
        
        int sum=0;
        
        
         head=head->next;
        
        
        while(head){
            
            
            if(head->val==0){
                
                
                if(newHead==NULL){
                    
                    newHead=new ListNode(sum);
                    newTail=newHead;
                }else{
                    
                    newTail->next=new ListNode(sum);
                    newTail=newTail->next;
                }
                
                sum=0;
            }else{
                
                sum+=head->val;
            }
            
            head=head->next;
        }
        
        return newHead;
    }
};
