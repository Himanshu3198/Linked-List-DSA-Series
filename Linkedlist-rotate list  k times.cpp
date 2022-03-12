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
    
//      time complexity O(n)+O(n-k)
    ListNode* rotateRight(ListNode* head, int k) {
      if(!head) return head;
        
        int len=1;
        ListNode *temp=head;
//          count no of nodes
        while(temp->next){
            len++;
            temp=temp->next;
        }
        
        // cout<<len;  
        // make it circular
        temp->next=head;
        
//         rotate list same for multiple  so we need to rotate only remaining nodes
//        like if k=12 and len=5 then we need not to rotate 12 time rotation of 5 and 10 will be same  
//         so need to rotate it for 2 times
        k=k%len;
        k=len-k;
        
        while(k--){
            temp=temp->next;
            
        }
        
        head=temp->next;
        temp->next=NULL;
                
          return head;

    }
};
