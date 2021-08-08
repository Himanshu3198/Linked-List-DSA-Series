// 1019. Next Greater Node In Linked List

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
    vector<int> nextLargerNodes(ListNode* head) {
        
        vector<int>nums;
        
        
        while(head!=NULL){
            
            nums.push_back(head->val);
            head=head->next;
        }
        
         stack<int>st;
        int n=nums.size();
        
        vector<int>nge(n,0);
        
        st.push(nums[n-1]);
        
        
         
        for(int i=n-2;i>=0;i--){
            
            while(!st.empty() and nums[i]>=st.top()){
                
                st.pop();
            }
            
            if(st.size()>0){
                
                nge[i]=st.top();
            }
            
            st.push(nums[i]);
        }
        
        return nge;
        
        
    }
};
