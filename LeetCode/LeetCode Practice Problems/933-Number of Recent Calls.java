class RecentCounter {
    Deque<Integer> dq;

    public RecentCounter() {
        dq = new LinkedList();
    }
    
    public int ping(int t) {
        dq.add(t);
        
        while(dq.peekFirst() < t - 3000) {
            dq.pollFirst();
        }
        
        return dq.size();
    }
}
