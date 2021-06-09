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
    
   
    struct compare {
        bool operator()(const ListNode* l, const ListNode* r) {
            return l->val > r->val;
        }
    };
public:
    ListNode* mergeKLists(vector<ListNode*>& list) {
        
        
        
        ListNode *dummy=new ListNode(0);
        
        ListNode *currNode=dummy;
        

        
        std::priority_queue<ListNode *,std::vector<ListNode*>,compare>heap;
        
        
        int n=list.size();
        
        if(n==0){
            return NULL;
        }
        
        for(int i=0;i<n;i++){
            
            if(list[i]!=NULL){
                   heap.push(list[i]);
            }
         
        }
        
        while(!heap.empty()){
            
          
            currNode->next=heap.top();
             heap.pop();
            currNode=currNode->next;
            if(currNode->next!=NULL){
                
                heap.push(currNode->next);
            }
        }
        
        currNode->next=NULL;
        
        return dummy->next;
    }
};
