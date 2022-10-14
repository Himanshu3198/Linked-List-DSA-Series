/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode deleteMiddle(ListNode head) {
        
        ListNode prev=null,slow=head,fast=head;
        if(head.next==null){
            head=null;
            return head;
        }
        if(head.next!=null && head.next.next==null){
            head.next=null;
            return head;
        }
        while(fast!=null && fast.next!=null){
            prev=slow;
            slow=slow.next;
            fast=fast.next.next;
        }
        if(prev!=null && prev.next!=null && slow!=null && slow.next!=null)
        prev.next=slow.next;
        return head;
    }
}
