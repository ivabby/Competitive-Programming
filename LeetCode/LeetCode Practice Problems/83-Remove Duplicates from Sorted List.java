class Solution {
    public ListNode deleteDuplicates(ListNode head) {
        ListNode cur = head;
        if(head == null) return null;
        
        while(cur.next != null) {
            if(cur.val == cur.next.val) {
                cur.next = cur.next.next;   
            } else {
                cur = cur.next;
            }
        }
        
        return head;
    }
}
