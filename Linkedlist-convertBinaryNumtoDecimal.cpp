1290. Convert Binary Number in a Linked List to Integer

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
    int getDecimalValue(ListNode* head) {
     
        
         int ans = 0;
        string s="";
        ListNode* temp=head;
        while(temp!=NULL)
        {
            s+=to_string(temp->val);
            temp=temp->next;
        }
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1') ans+=pow(2,n-1-i);
        }
        
        return ans;
    }
};
