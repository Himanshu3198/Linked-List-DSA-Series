// Merge K sorted linked list 
// time complexity O(nLogK)
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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        
        priority_queue<int,vector<int>,greater<int>>pq;
        
    
             for(auto lis:lists){
                 
                 auto temp=lis;
                 
                 
                 while(temp){
                     
                     pq.push(temp->val);
                     temp=temp->next;
                 }
             }
        
        
          ListNode *newHead=NULL,*newTail=NULL;
        
        while(!pq.empty()){
            
            auto curr=pq.top();
            
              pq.pop();
            
            if(newHead==NULL){
                
                newHead=new ListNode(curr);
                newTail=newHead;
            }else{
                
                newTail->next=new ListNode(curr);
                newTail=newTail->next;
            }
        }
        
        return newHead;
    }
};
