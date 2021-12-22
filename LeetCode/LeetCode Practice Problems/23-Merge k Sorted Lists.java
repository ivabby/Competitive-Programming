class Solution {
    public ListNode mergeKLists(ListNode[] lists) {
        ListNode list = new ListNode(-1);
        ListNode tmp = list;
        int idx = -1;
        
        do {
            idx = -1;
            int val = Integer.MAX_VALUE;
            for(int i=0;i<lists.length;i++) {
                if(lists[i] == null) continue;
                if(val > lists[i].val) {
                    idx = i;
                    val = lists[i].val;
                }
            }
            
            if(idx != -1) {
                tmp.next = new ListNode(lists[idx].val);
                tmp = tmp.next;
                lists[idx] = lists[idx].next;
            }
        } while(idx != -1);
        
        return list.next;
    }
}
