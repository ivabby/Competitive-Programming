class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode dummy = new ListNode(0) , cur = dummy;
        int carry = 0;
        while(l1!=null || l2!=null)
        {
            int x = (l1 == null)?0:l1.val;
            int y = (l2 == null)?0:l2.val;
            int sum = carry + x + y;
            carry = sum/10;
            ListNode temp = new ListNode(sum%10);
            cur.next = temp;
            cur = cur.next;
            if(l1 != null) l1 = l1.next;
            if(l2 != null) l2 = l2.next;
        }
        
        if(carry != 0)
        {
            ListNode temp = new ListNode(carry);
            cur.next = temp;
            cur = cur.next;
        }
        return dummy.next;
    }
}
