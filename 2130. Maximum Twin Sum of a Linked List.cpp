
/**
 *Definition for singly-linked list.
 *struct ListNode {
 *    int val;
 *    ListNode * next;
 *    ListNode() : val(0), next(nullptr) {}
 *    ListNode(int x) : val(x), next(nullptr) {}
 *    ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution
{
    public:
        int pairSum(ListNode *head)
        {
            ListNode *fast = head, *slow = head;
            while (fast != NULL && fast->next->next != NULL)
            {
                slow = slow->next;
                fast = fast->next->next;
            }

            ListNode *newHead = slow->next, *prev = NULL, *curr = newHead, *nex = newHead;
            slow->next = NULL;

            while (curr != NULL)
            {
                nex = nex->next;
                curr->next = prev;
                prev = curr;
                curr = nex;
            }

            newHead = prev;
            int sum = 0;

            while (head != NULL && newHead != NULL)
            {
               	// cout<<head->val<<" "<<newHead->val<<"\n";
                sum = max(sum, (head->val + newHead->val));
                head = head->next;
                newHead = newHead->next;
            }
            return sum;
        }
};
