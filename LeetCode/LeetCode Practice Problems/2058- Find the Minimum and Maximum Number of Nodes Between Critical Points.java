class Solution {
    public int[] nodesBetweenCriticalPoints(ListNode head) {
        int mn = Integer.MAX_VALUE;
        int mx = Integer.MIN_VALUE;
        
        int startingIndex = -1;
        int previousIndex = -1;
        
        ListNode tmp = head;
        int pos = 1;
        
        while(tmp.next.next != null) {
            pos++;
            int prev = tmp.val;
            int cur = tmp.next.val;
            int next = tmp.next.next.val;
            
            if((cur > prev && cur > next) || (cur < prev && cur < next)) {
               
                if(startingIndex == -1) {
                    startingIndex = pos;
                } else {
                    mn = Math.min(mn , pos - previousIndex);
                }
                previousIndex = pos;
            }
            
            tmp = tmp.next;
        }
        
        if(startingIndex == -1 || startingIndex == previousIndex) {
            return new int[]{-1,-1};
        }
        
        return new int[]{mn , previousIndex - startingIndex};
    }
}
