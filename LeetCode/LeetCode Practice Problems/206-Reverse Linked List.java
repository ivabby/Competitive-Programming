class Solution {
    public ListNode reverseList(ListNode head) {
        ListNode rev = null;
        while(head != null) {
            ListNode cur = new ListNode(head.val);
            cur.next = rev;
            rev = cur;
            head = head.next;
        }
        return rev;
    }
}
