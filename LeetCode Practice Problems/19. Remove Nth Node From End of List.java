/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        ListNode dummy = head;
        int l = 0;
        while(dummy != null)
        {
            dummy = dummy.next;
            l++;
        }
        dummy = new ListNode(0);
        dummy.next = head;
        l-=n;
        ListNode f = dummy;
        while(l>0)
        {
            l--;
            f = f.next;
        }
        f.next = f.next.next;
        dummy = dummy.next;
        return dummy;
    }
}
