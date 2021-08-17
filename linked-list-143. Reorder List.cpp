// 143. Reorder List

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
    void reorderList(ListNode* head) {
        
        vector<int>vec;
        
        ListNode*temp=head;
        
        while(temp){
            
            vec.push_back(temp->val);
            temp=temp->next;
        }
        
        int n=vec.size();
        
        int i=1,j=n-1;
        bool flag=false;
        temp=head->next;
        
         
        while(temp!=NULL){
            
            
            if(flag==true){
                
                temp->val=vec[i++];
                 
             } 
            else{
                   temp->val=vec[j--];
               
            }
            flag=!flag;
            temp=temp->next;
            
            
            
        }
        
        return;
    }
};
