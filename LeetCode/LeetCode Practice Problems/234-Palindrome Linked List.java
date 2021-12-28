class Solution {
    
    public ListNode reverseList(ListNode head) {
        ListNode rev = null;
        ListNode tmp = head;
        while(tmp != null) {
            ListNode cur = new ListNode(tmp.val);
            cur.next = rev;
            rev = cur;
            tmp = tmp.next;
        }
        return rev;
    }
    
    public boolean isPalindrome(ListNode head) {
        ListNode rev = reverseList(head);
        while(head != null) {
            System.out.println(head.val+" "+rev.val);
            if(head.val != rev.val) {
                return false;
            }
            head = head.next;
            rev = rev.next;
        }
        return true;
    }
}
