class Solution {
    public ListNode deleteDuplicates(ListNode head) {
        ListNode newNode = new ListNode(0);
        ListNode temp = newNode;
        int data = 0;
        if(head != null)
        {
            newNode.next = new ListNode(head.val);
            temp = temp.next;
            data = temp.val;
        }
        
        while(head != null)
        {
            if(head.val != data)
            {
                temp.next = new ListNode(head.val);
                temp = temp.next;
                data = temp.val;
            }
            head = head.next;
        }
        
        return newNode.next;
    }
}
