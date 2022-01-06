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
      int tot,vis;
    
    
    ListNode *Reverse(ListNode *head,int k){
        
        
        if(k%2!=0){
            
               int count=0;
         ListNode *prev=NULL,*temp=head;
          while( temp!=NULL and count<k){
              prev=temp;
              temp=temp->next;
              vis++;
              count++;
          }
        
        if(temp!=NULL){
            
              if(k+1>tot-vis){
                    prev->next=Reverse(temp,tot-vis);
                }
                else{
                  prev->next=Reverse(temp,k+1);   
                }
            
        }
        return head;
            
        }
         
          ListNode *prev=NULL,*nex=head,*curr=head;
            int count=0;
            
            
            while(curr!=NULL and count<k){
                
                nex=curr->next;
                
                curr->next=prev;
                prev=curr;
                
                curr=nex;
                count++;
                vis++;
            }
            
            
            if(nex!=NULL){
                
                if(k+1>tot-vis){
                    head->next=Reverse(nex,tot-vis);
                }
                else{
                  head->next=Reverse(nex,k+1);   
                }
                
            }
            
            
            head=prev;
            
            return head;
            
            
    }
    ListNode* reverseEvenLengthGroups(ListNode* head) {
        
        
       ListNode *root= head;
        ListNode *temp=head;
        while(temp!=NULL){
            temp=temp->next;
            tot++;
        }
        
        return Reverse(head,1);
        
        
        
        
    }
};
