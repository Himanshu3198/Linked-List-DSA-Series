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
    ListNode* swapNodes(ListNode* head, int k) {
        
        
        int len=0;
        
        ListNode *temp=head;
        
        while(temp){
            temp=temp->next;
            len++;
        }
        int count=1;
        temp=head;
        ListNode *node1,*node2;
        if(len==1) return head;
        while(temp){
            
            if(count==k)
               node1=temp;  
            if(count==(len-k+1))
                node2=temp;
            temp=temp->next;
            count++;
        }
        swap(node1->val,node2->val);
        return head;
    }
};
