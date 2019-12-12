/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
    public ListNode mergeTwoLists(ListNode l1, ListNode l2) {
        ListNode temp = new ListNode(0);
        ListNode t = temp;
        
        while(l1!=null && l2!=null)
        {
            if(l1.val < l2.val)
            {
                ListNode newt = new ListNode(l1.val);
                t.next = newt;
                t = t.next;
                l1 = l1.next;
            }
            else
            {
                ListNode newt = new ListNode(l2.val);
                t.next = newt;
                t = t.next;
                l2 = l2.next;
            }
        }
        if(l1!=null)
            t.next = l1;
        else if(l2 != null)
            t.next = l2;
        temp = temp.next;
        return temp;
    }
}
