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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        
        vector<vector<int>>res(m,vector<int>(n,-1));
        
        int left=0,right=n-1,top=0,bottom=m-1;
        
        while(head!=NULL){
            
            // left to right
           for(int i=left;i<=right;i++){
               if(head){
               res[top][i]=head->val;
               head=head->next;
               }
           }
            top++;
            
            //top to down
            
            for(int i=top;i<=bottom;i++){
                if(head){
                res[i][right]=head->val;
                head=head->next;
                }
            }
            right--;
            // right to left
            
            for(int i=right;i>=left;i--){
                if(head){
                res[bottom][i]=head->val;
                head=head->next;
                }
            }
            bottom--;
            
            // down to up
            
            for(int i=bottom;i>=top;i--){
                if(head){
                res[i][left]=head->val;
                head=head->next;
                }
            }
            left++;
        }
        return res;
    }
};
