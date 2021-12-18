class Solution {
    public int findTheWinner(int n, int k) {
        Queue<Integer> q = new LinkedList();
        
        for(int i=1;i<=n;i++) {
            q.add(i);
        }
        
        while(q.size() != 1) {
            int x = k;
            while(x > 1) {
                x--;
                int val = q.poll();
                q.add(val);
            }
            q.poll();
        }
        
        return q.peek();
    }
}
