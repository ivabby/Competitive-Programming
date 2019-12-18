class Solution {
    public ListNode swapPairs(ListNode head) {
        ListNode newNode = new ListNode(0);
        ListNode temp = newNode;
        while(head!=null && head.next != null)
        {
            ListNode t = new ListNode(head.val);
            ListNode tt = new ListNode(head.next.val);
            temp.next = tt;
            temp = temp.next;
            temp.next = t;
            temp = temp.next;
            head = head.next.next;
        }
        if(head != null)
        {
            temp.next = new ListNode(head.val);
        }
        return newNode.next;
    }
}
