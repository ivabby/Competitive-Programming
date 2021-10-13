class Solution {
    
    static class NextGreater {
        Stack<Integer> st;
        int index;
        int ans[];
        
        public NextGreater(int n) {
            ans = new int[n];
            st = new Stack();
            index = n-1;
        }
    }
    
    public int findLengthOfList(ListNode head) {
        ListNode temp = head;
        int size = 0;
        
        while(temp != null) {
            temp = temp.next;
            size++;
        }
        
        return size;
    }
    
    public void findLarger(ListNode head,NextGreater ng) {
        
        if(head == null) return;
        
        findLarger(head.next , ng);
        
        while(!(ng.st.empty()) && ng.st.peek() <= head.val) {
            ng.st.pop();
        }
        
        ng.ans[ng.index] = (ng.st.empty())?0:ng.st.peek();
        
        ng.st.push(head.val);
        ng.index--;
        
    }
    
    public int[] nextLargerNodes(ListNode head) {
        int size = findLengthOfList(head);
        NextGreater ng = new NextGreater(size);
        findLarger(head , ng);
        
        return ng.ans;
    }
}
