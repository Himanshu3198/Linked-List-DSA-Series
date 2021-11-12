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
    ListNode* removeElements(ListNode* head, int x) {
        
        
        ListNode *temp=head,*prev=temp;
        
        
        while(temp!=NULL){
            
             if(temp==head and temp->val==x){
            
                  while( temp and temp->val==x){
                      temp=temp->next;
                  }
                 head=temp;
                 
             }
            else if(temp->next==NULL){
                
                if(temp->val==x){
                      prev->next=NULL;
                    
                }
                temp=temp->next;
            }
            else{
                
                if(temp->val==x){
                    while(temp and temp->val==x){
                        temp=temp->next;
                    }
                    prev->next=temp;
                     
                     prev=temp;
                }
                else{
                    
                    prev=temp;
                    temp=temp->next;
                }
            }
        
        }
        
        return head;
        
        
    
    }
};
